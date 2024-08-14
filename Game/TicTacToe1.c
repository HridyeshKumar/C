#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int board[10]={2,2,2,2,2,2,2,2,2,2};
int turn=1,flag=0;
int player,comp;
void menu();
void go(int n);
void start_game();
void check_draw();
void draw_board();
void player_first();
void put_X_O(char ch,int pos);
COORD coord={0,0};   //this is global variable
//center of axis is set to the top left cornor of the screen
void gotoxy(int x,int y){
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void main(){
    system("cls");
    menu();
    getch();
}
void menu(){
    int choice;
    system("cls");
    printf("\n----Menu----");
    printf("\n1:Play with X");
    printf("\n2:Play with Y");
    printf("\n3:Exit");
    printf("\nEnter your choice:>");
    scanf("%d",&choice);
    turn=1;
    switch(choice){
        case 1:
            player=1;
            comp=0;
            player_first();
            break;
        case 2:
            player=0;
            comp=1;
            start_game();
            break;
        case 3:
            exit(1);
        default:
            menu();
    }
}
int make2(){
    if(board[5]==2)
        return 5;
    if(board[2]==2)
        return 2;
    if(board[4]==2)
        return 4;
    if(board[6]==2)
        return 6;
    if(board[8]==2)
        return 8;
    return 0;
}
int make4(){
    if(board[1]==2)
        return 1;
    if(board[3]==2)
        return 3;
    if(board[7]==2)
        return 7;
    if(board[9]==2)
        return 9;
    return 0;
}
int passwin(int p){
    //p==1 then X , p==0 then O
    int i;
    int check_val,pos;
    if(p==1)
        check_val=18;
    else
        check_val=50;
    i=1;
    while(i<=9){     //row check
        if(board[i]*board[i+1]*board[i+2]==check_val){
            if(board[i]==2)
                return i;
            if(board[i+1]==2)
                return i+1;
            if(board[i+2]==2)
                return i+2;
        }
        i+=3;
    }
    i=1;
    while(i<=3){      //column check
        if(board[i]*board[i+3]*board[i+6]==check_val){
            if(board[i]==2)
                return i;
            if(board[i+3]==2)
                return i+3;
            if(board[i+6]==2)
                return i+6;
        }
        i++;
    }
    if(board[1]*board[5]*board[9]==check_val){
        if(board[1]==2)
            return i;
        if(board[5]==2)
            return 5;
        if(board[9]==2)
            return 9;
    }
    if(board[3]*board[5]*board[7]==check_val){
        if(board[3]==2)
            return 3;
        if(board[5]==2)
            return 5;
        if(board[7]==2)
            return 7;
    }
    return 0;
}
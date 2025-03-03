 #include<stdio.h>
 #include<conio.h>
 #include<dos.h>
 void main(){
     clrscr();
     int i;
     textcolor();
     textbackground();
     for(i=1;i<5;i++)
     {
         printf(" I LOVE YOU \3  ");
         delay(200);
     }
     getch();
 }
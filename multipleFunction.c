#include<stdio.h>
void japan(){
    printf("You are in JAPAN\n");
}
void england(){
    printf("You are in ENGLAND\n");
    japan();
}
void india(){
    printf("You are in INDIA\n");
    england();
}
int main(){
    printf("You are in MAIN\n");
    india();
}
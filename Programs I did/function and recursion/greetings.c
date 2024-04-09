#include<stdio.h>
void greet(){
    printf("Hey,Good Morning\n");
    printf("How are you?\n");
    return;
}
int main()
{
    printf("Hi,I am Hridyesh Kumar\n");
    greet();//calling the function
    printf("Hi,I am doing bachelors at CSVTU\n");
    greet();
    greet();
    return 0;
}
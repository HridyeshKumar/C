#include<stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
}s[5];
int main(){
    int i;
    printf("Enter information of students:\n");
    //storing information
    for(i=0;i<5;++i){
        s[i].roll=i+1;
        printf("\nFor roll no.:%d,\n",s[i].roll);
        printf("Enter first name:");
        scanf("%s",&s[i].firstName);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
    }
    printf("Displaying Information:\n\n");
    for(i=0;i<5;++i){
        printf("\nRoll no.:%d\n",i+1);
        printf("First Name:");
        puts(s[i].firstName);   
        printf("Marks:%.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}
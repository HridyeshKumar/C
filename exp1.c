//Using library functions
#include<stdio.h>
#include<string.h>
int main(){
    char arr[30],s1[10],s2[10],s3[10];
    int opt,i=0,j,len;
    printf("Enter any option:\n");
    printf("1:Find out length of the string\n");
    printf("2:Concatenation of the two string\n");
    printf("3:Reverse of the string\n");
    printf("4:Copying the string\n");
    printf("5:Finding substring in string\n");
    printf("Enter the choice:\n");
    scanf("%d",&opt);
    switch(opt){
        case 1:
        {
            printf("Enter any string:\n");
            scanf("%s",arr);
            int len=strlen(arr);
            printf("Length of String is %ld", len);
            break;
        }
        case 2:
        {
            printf("String Concatenation\n");
            printf("Enter the first string:\n");
            scanf("%s",s1);
            printf("Enter the second string:\n");
            scanf("%s",s2);
            strcat(s1,s2);
            printf("The concatenated string is %s",s1);
            break;
        }
        case 3:
        {
            printf("Reverse the string:");
            printf("\nEnter the string:");
            scanf("%s",s1);
            printf("Reversed string:%s",strrev(s1));
            break;
        }
        case 4:
        {
            printf("String copying\n");
            printf("Enter the string:");
            scanf("%s",s1);
            strcpy(s2,s1);
            puts(s2);
            break;
        }
        case 5:
        {
            printf("Finding substring in string\n");
            int pos,len;
            char str[40], substr[40];
            pos=3;
            len=4;
            printf("Enter the string: ");
            scanf("%s",str);
            strncpy(substr,str+(pos-1),len);
            printf("%s",substr);
            break;
        }
        default:
        {
            printf("Not a valid option");
        }
    }
    return 0;
}
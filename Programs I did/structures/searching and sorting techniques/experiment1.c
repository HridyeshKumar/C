//Without using library functions
#include<stdio.h>
int main(){
    char arr[30],s1[10],s2[10],s3[10];
    int opt,i=0,j,len=0;
    printf("Enter any option:\n");
    printf("1:Find out length of the string\n");
    printf("2:Concatenation of the two string\n");
    printf("3:Reverse of the string\n");
    printf("4:Copying the string\n");
    printf("5:Palindrome of string or not\n");
    printf("6:Finding substring in string\n");
    printf("Enter the choice:\n");
    scanf("%d",&opt);
    switch(opt){
        case 1:
        {
            printf("Enter any string:\n");
            scanf("%s",arr);
            for(i=0;arr[i]!='\0';i++)
            {
                len++;
            }
            printf("The length of the string:%d\n",len);
            break;
        }
        case 2:
        {
            printf("String Concatenation\n");
            printf("Enter the first string:\n");
            scanf("%s",s1);
            printf("Enter the second string:\n");
            scanf("%s",s2);
            for(i=0;s1[i]!='\0';i++)
            {
                s3[i]=s1[i];
            }
            s3[i]='\0';
            for(j=0;j<=i;j++)
            {
                s3[i+j]=s2[j];
            }
            printf("The concatenated string is %s",s3);
            break;
        }
        case 3:
        {
            printf("Reverse the string:");
            printf("\nEnter the string:");
            scanf("%s",s1);
            while(s1[i]!='\0')
            {
                len=len+1;
                i++;
            }
            for(i=len-1;i>=0;i--){
                printf("%c",s1[i]);
            }
            break;
        }
        case 4:
        {
            printf("String copying\n");
            printf("Enter 1st string:");
            scanf("%s",s1);
            printf("Enter 2nd string:");
            scanf("%s",s2);
            while(s2[i]!='\0'){
                s1[i]=s2[i];
                i++;
            }
            s1[i]='\0';
            printf("After copying 2nd string in 1st string is %s",s1);
            break;
        }
        case 5:
        {
            printf("Palindrome of string or not\n");
            char string[40];
            int length=0, flag=1,i;

            printf("Enter string:\n");
            scanf("%s",string);

            for(i=0;string[i]!='\0';i++)
            {
                length++;
            }

            for(i=0;i< length/2;i++)
            {
                if( string[i] != string[length-1-i] )
                {
                    flag=0;
                    break;
                }
            }

            if(flag==1)
            {
                printf("PALINDROME");
            }
            else
            {
                printf("NOT PALINDROME");
            }
            break;
        }
        case 6:
        {
            printf("Finding substring in string\n");
            char str[40], substr[40];
            printf("Enter the string: ");
            scanf("%s",str);
            printf("Enter the substring: ");
            scanf("%s",substr);
            int i = 0, j = 0;
            while (str[i] != '\0') 
            {
                if (str[i] == substr[j]) 
                {
                    j++;
                    if(substr[j]=='\0')
                    break;
                }
                else {
                    i=i-j;
                    j=0;
                }
                i++;
            }
            if (substr[j] == '\0')
            printf("Substring exists\n");
            else
            printf("Substring does not exists\n");
            break;
        }
        default:
        {
            printf("Not a valid option");
        }
    }
    return 0;
}

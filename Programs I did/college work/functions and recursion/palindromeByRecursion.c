#include<stdio.h>
int checkPalindrome(int);
int main(){
    int num,sum;

    printf("Enter a number: ");
    scanf("%d",&num);

    sum = checkPalindrome(num);

    if(num==sum)
         printf("%d is a palindrome",num);
    else
    printf("%d is not a palindrome",num);

    return 0;
}

int checkPalindrome(int num){

    static int sum=0,r;

    if(num!=0){
         r=num%10;
         sum=sum*10+r;
         checkPalindrome(num/10);
    }
    return sum;
}
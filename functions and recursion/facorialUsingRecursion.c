#include<stdio.h>
int fact(int);
int main()
{
  int num,f;
  
  printf("Enter a number: ");
  scanf("%d",&num);
  
  f=fact(num);
  
  printf("\nFactorial of %d is: %d",num,f);
  
  return 0;
}

int fact(int n)
{
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
 }

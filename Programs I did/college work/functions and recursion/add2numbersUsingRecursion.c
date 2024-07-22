#include <stdio.h>
#include <conio.h>
int y;
add(int m,int n)
	{ if(n==0)
	   return m;
	  y=add(m,n-1)+1;
	  return y;
	}
main()
	{ int a,b,r;
	  printf("enter the two numbers : ");
	  scanf("%d%d",&a,&b);
	  r=add(a,b);
	  printf("Sum of two no :%d",r);
	  return 0;
	}
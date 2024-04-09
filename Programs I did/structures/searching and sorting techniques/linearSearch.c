#include<stdio.h>
int search(int array[],int n,int x){
    for(int i=0;i<n;i++)
        if(array[i]==x)
            return i;
    return -1;
}
int main(){
    int array[100],n,i,x;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Input the %d numbers :\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter the value of finding element:%d",x);
    scanf("%d",&x);
    int result=search(array,n,x);
    (result==-1)?printf("Element not found"):printf("Element found at index:%d",result);
}
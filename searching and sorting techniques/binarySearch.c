#include<stdio.h>
int binarySearch(int array[],int x,int low,int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(array[mid]==x)
            return mid;
        if(array[mid]<x)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int array[100],n,i,x;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Input the %d numbers in sorted order:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter the value of finding element:%d",x);
    scanf("%d",&x);
    int result=binarySearch(array,x,0,n-1);
    (result==-1)?printf("Element not found"):printf("Element found at index:%d",result);
    return 0;
}
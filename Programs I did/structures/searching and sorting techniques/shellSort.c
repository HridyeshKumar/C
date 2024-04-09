#include<stdio.h>
int main(){
    int arr[30];
    int i,j,k,temp,num;
    printf("\nEnter total number of elements:");
    scanf("%d",&num);
    for(k=0;k<num;k++){
        printf("\nEnter %d numbers:",k+1);
        scanf("%d",&arr[k]);
    }
    for(i=num/2;i>0;i=i/2){
        for(j=i;j<num;j++){
            for(k=j-i;k>=0;k=k-i){
                if(arr[k+i]>=arr[k])
                    break;
                else{
                    temp=arr[k];
                    arr[k]=arr[k+i];
                    arr[k+i]=temp;
                }
            }
        }
    }
    printf("\nShell Sorting:");
    for(k=0;k<num;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}
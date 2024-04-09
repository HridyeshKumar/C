#include<stdio.h>
#include<stdlib.h>
void bucketSort(int array[],int n){
    int i,j;
    int *count=NULL;
    //find largest
    int mymax=array[0]+1;
    for(i=1;i<n;++i){
        if(mymax<(array[i]+1)){
            mymax=array[i]+1;
        }
    }
    //allocate and zero-fill a proper-sized array 
    count=(int*)calloc(mymax,sizeof(*count));
    for(i=0;i<n;i++){
        (count[array[i]])++;
    }
    for(i=0,j=0;i<mymax;i++){
        for(;count[i]>0;(count[i])--){
            array[j++]=i;
        }
    }
    free(count);
} 
int main(){
    int array[100],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements to be sorted:\n ",n);
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nThe array of elements before sorting:\n");
    for (i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\nThe array of elements after sorting:\n");
    bucketSort(array,n);
    for (i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
    
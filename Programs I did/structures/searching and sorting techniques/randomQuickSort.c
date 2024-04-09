//RANDOMIZED QUICK SORT
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int*lhs,int*rhs){
    if(lhs==rhs){
        return;
    }
    int temp=*lhs;
    *lhs=*rhs;
    *rhs=temp;
}     
int partition(int arr[],int len){
    int i,pivot=0;
    //swap random slot seletion to end.
    //arr[len-1] wil hold the pivot value.
    swap(arr+(rand()%len),arr+(len-1));
    for(i=0;i<len;++i){
        if(arr[i]<arr[len-1]){
            swap(arr+i,arr+pivot++);
        }
    }
    //swap the pivot value into position
    swap(arr+pivot,arr+(len-1));
    return pivot; 
}
void quickSort(int arr[],int len){
    if(len<2){
        return;
    }
    int pivot=partition(arr,len);
    //note increment, skips pivot slot
    quickSort(arr,pivot++);
    quickSort(arr+pivot,len-pivot); 
}
int main(){
    srand((unsigned int)time(NULL));
    const int N=20;
    int data[N],i;
    printf("Before sorting:\n");
    for(i=0;i<N;++i){
        data[i]=rand()%50+1;
        printf("%d ",data[i]);
    }
    quickSort(data,N);
    printf("\nAfter Sorting:\n");
    for(i=0;i<N;++i){
        printf("%d ",data[i]);
    }
    return 0;
}
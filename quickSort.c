#include<stdio.h>
void swap(int a[],int left,int right){
    int temp;
    temp=a[left];
    a[left]=a[right];
    a[right]=temp;
}
int partition(int a[],int low ,int high){
    int left,right;
    int pivot_item;
    left=low;
    pivot_item=a[low];
    right=high;
    while (left<right){
        //move left while item < pivot
        while(a[left]<=pivot_item){
            left++;
        }
        //move right while item > pivot
        while(a[right]>pivot_item){
            right--;
        }
        if(left<right){
            swap(a,left,right);
        }
    }
    //right is final position for the pivot 
    a[low]=a[right];
    a[right]=pivot_item;
    return right;
}
void printArray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void quickSort(int a[],int low, int high){
    int pivot;
    //termination condition!
    if(high>low){
        pivot=partition(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}
int main(){
    int a[50],i,n;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nUnsorted elements:\n");
    printArray(a,n);
    quickSort(a,0,n-1);
    printf("\nSorted elements:\n");
    printArray(a,n);
    return 0;
}
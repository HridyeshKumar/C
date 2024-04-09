#include<stdio.h>
#define MAX 100
#define SHOWPASS
void print(int*a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void radixSort(int *a,int n){
    int i,b[MAX],m=0,exp=1;
    for(i=0;i<n;i++){
        if(a[i]>m)
        m=a[i];
    }
    while (m/exp>0){
        int box[10]={0};
        for(i=0;i<n;i++){
            box[a[i]/exp%10]++;
        }
        for(i=1;i<10;i++){
            box[i]+=box[i-1];
        }
        for(i=n-1;i>=0;i--){
            b[--box[a[i]/exp%10]]=a[i];
        }
        for(i=0;i<n;i++){
            a[i]=b[i];
        }
        exp*=10;
#ifdef SHOWPASS
    printf("\n\nPASS:");
    print(a,n);
#endif
    } 
}
int main(){
    int arr[MAX];
    int i,num;
    printf("\nEnter total elements(num<%d):",MAX);
    scanf("%d",&num);
    printf("\nEnter %d elements:",num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nARRAY:");
    print(&arr[0],num);
    radixSort(&arr[0],num);
    printf("\n\nSORTED ARRAY:");
    print(&arr[0],num);
    return 0;
}
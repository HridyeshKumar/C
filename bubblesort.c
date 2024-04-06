#include <stdio.h>
int main() {
    int arr[]={5,6,9,10,15,4,2,3,1};
    int n=9;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
                for(int i=0;i<n;i++){
                    printf("%d\t",arr[i]);
                }   
                printf("\n");
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

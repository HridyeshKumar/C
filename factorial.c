#include<stdio.h>
int main(){
    int n,i;
    unsigned long long fact=1;
    printf("Enter an integer: ");
    scanf("%d,&n");
    if(n<0){
        printf("Error! Fctorial of a negative number doesn't exist.");
    }
    else 
    for(i=1;i<=n;++i){
        fact*=i;
    }
    printf("Fctorial of %d=%llu",n,fact);
    return 0;
}
    
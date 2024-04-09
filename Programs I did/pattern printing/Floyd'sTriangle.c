#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    int a=1;
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=i;j++) //columns
        {
            if(a<10){
                printf("%d ",a);//it can be i also
                a++;
            }
            else{
                printf("%d ",a);//it can be i also
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int vectorx[10];
    int i,j,pos,element,found=0;
    for(i=0;i<10;i++)
        printf("\nEnter the number:");
        scanf("%d",&vectorx[i]);
    printf("Enter the element to be deleted\n");
    scanf("%d",&element);
    found=9;
    for(i=0;i<=found;i++)
        if(vectorx[i]==element)
            for(j=i+1;j<=found;j++)
                vectorx[j-1]=vectorx[j];
                i--;
                found--;
    printf("The resultant vector is \n",element);
    for(i=0;i<=found;i++)
        printf("%d\n",vectorx[i]);
    return 0;
}

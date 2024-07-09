#include<stdio.h>
int main(){
    int a[10][10];
    int i,j,row,column,flag=1;
    printf("Enter the order of the matrix A: ");
    scanf("%d%d",&row,&column);
    printf("Enter the elements of the matrix A\n");
    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
            scanf("%d",&a[i][j]);
    printf("MATRIX A is \n");
    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    // Check for unit or identity matrix
    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
            if(a[i][j]!=1 && a[j][i]!=0)
                flag=0;
                break;
    if (flag==1)
        printf("It is identity matrix\n");
    else
        printf("It is not a identity matrix\n");
    return 0;
}

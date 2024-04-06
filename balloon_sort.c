#include<stdio.h>
int main(){
    int num,N[10],x,y,z,temp;
    printf("How many number would you like to sort:");
    scanf("%d",&num);
    printf("Input the %d numbers :\n",num);

    for(x=0;x<num;x++)
    scanf("%d",&N[x]);

    for(x=0;x<num;x++){
        for(y=0;y<num-x;y++){
            if(N[x]>N[x+y]){
                temp=N[x];
                N[x]=N[x+y];
                N[x+y]=temp;
            }
        }
        printf("step %d:",x+1);
        for(z=0;z<num;z++){
            printf("%3d",N[z]);
        }
        printf("\n");
    } 
}
#include<stdio.h>
//C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n,char from_rod, char to_rod,char aux_rod)
{
    if(n==1)
    {
        printf("\n Move disk 1 from rod %c to rod %c ",from_rod,to_rod);
        return;
    }
    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    printf("\n Move disk %d from rod %c to rod %c",n,from_rod,to_rod);
    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main(){
    int n=4;//number of disks
    //printf("Enter the number of disks:");
    //scanf("%d ",&n);
    towerOfHanoi(n,'A','C','B');//A,B,C are the names of rods 
    return 0;
}
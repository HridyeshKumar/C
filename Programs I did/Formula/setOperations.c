#include<stdio.h>
#define MAX 30

void create(int set[]);
void print(int set[]);
void Union(int set1[],int set2[],int set3[]);
void intersection(int set1[],int set2[],int set4[]);
void difference(int set1[],int set2[],int set5[]);
int member(int set[],int x);

int main()
{
    int set1[MAX],set2[MAX],set3[MAX];
    int x,op;
    set1[0]=set2[0]=set3[0]=0;

    printf("--SET OPERATIONS--\n");
    printf("\n1)Create two sets.");
    printf("\n2)Print the set.");
    printf("\n3)AuB - A Union B");
    printf("\n4)AnB - A Intersection B");
    printf("\n5)A - B : Difference between two sets A - B");
    printf("\n6)B - A : Difference between two sets B - A");
    printf("\n7)U - A : Complement of A");
    printf("\n8)Exit from program.\n");
    do
    {
        printf("\nEnter Your Choice : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printf("\nCreate Set A: ");
                create(set1);
                printf("\nCreate Set B: ");
                create(set2);
                break;
            case 2:
                printf("\nSet A:\n");
                print(set1);
                printf("\nSet B:\n");
                print(set2);
                break;
            case 3:
                Union(set1,set2,set3);
                print(set3);
                break;
            case 4:
                intersection(set1,set2,set3);
                print(set3);
                break;
            case 5:
                difference(set1,set2,set3);
                print(set3);
                break;
            case 6:
                difference(set2,set1,set3);
                print(set3);
                break;
            case 7:
                Union(set1,set2,set3);
                int tmp = set3;
                difference(tmp,set1,set3);
                print(set3);
                break;
            case 8:
                exit(0);
            default:
                printf("\nPlease Enter a valid choice\n");
                break;
         }

    } while(op!=8);
    return 0;
}

void create(int set[])
{
    int n,i,x;
    set[0]=0;
    printf("\nNo. of elements in the set : ");
    scanf("%d",&n);
    printf("Enter set elements : ");

    for(i=1;i<=n;i++)
        scanf("%d",&set[i]);

    set[0]=n;
}

void  print(int set[])
{
    int i,n;
    n=set[0];
    printf("\nMembers of the set :--> ");

    for(i=1;i<=n;i++)
       printf("%d  ",set[i]);
}

void Union(int set1[],int set2[],int set3[])
{
    int i,n;
    set3[0]=0;
    n=set1[0];

    for(i=0;i<=n;i++)
        set3[i]=set1[i];

    n=set2[0];
    for(i=1;i<=n;i++)
        if(!member(set3,set2[i]))
            set3[++set3[0]]=set2[i];
}

int member(int set[],int x)
{
    int i,n;
    n=set[0];
    for(i=1;i<=n;i++)
        if(x==set[i])
            return(1);
    return(0);
}

void intersection(int set1[],int set2[],int set3[])
{
    int i,n;
    set3[0]=0;
    n=set1[0];
    for(i=1;i<=n;i++)
      if(member(set2,set1[i]))
           set3[++set3[0]]=set1[i];
}

void difference(int set1[],int set2[],int set3[])
{
    int i,n;
    n=set1[0];
    set3[0]=0;
    for(i=1;i<=n;i++)
       if(!member(set2,set1[i]))
            set3[++set3[0]]=set1[i];
}

#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

char que[20];
int front = 0, rear = 0, n;
char arr[20];

int bfs(int);

char ajMat[20][20];
char b[20];

void display();

int p = 0;

int main()
{
    char v;
    int i, j;
    printf("Enter the number of nodes in a graph : ");
    scanf("%d", &n);
    printf("Enter the value of node of graph : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &b[i]);
    }

    printf("Enter the value in adjacency matrix in from of 'y' or 'n'\n");
    printf("If there exits an edge between two vertices than 'y' otherwise 'n'\n ");
    for (i = 0; i < n; i++)
        printf(" %c", b[i]);
    for (i = 0; i < n; i++)
    {
        printf("\n%c ", b[i]);
        for (j = 0; j < n; j++)
        {
            printf("%c ", v = getch());
            ajMat[i][j] = v;
        }
        printf("\n\n");
    }
    for (i = 0; i < n; i++)
        bfs(i);

    display();
    return 0;
}

void display()
{
    int i;
    printf("BFS of Graph : ");
    for (i = 0; i < n; i++)
        printf("%c ", arr[i]);
}

void insert(char val)
{
    que[front] = val;
    front++;
}

char del()
{
    rear = rear + 1;
    return que[rear - 1];
}

//stdbool.h header file is required for bool datatype
bool unVisit(char val)
{
    int i;
    for (i = 0; i < front; i++)
    {
        if (val == que[i])
            return false;
    }
    return true;
}

int bfs(int i)
{
    char m;
    int j;
    if (front == 0)
    {
        insert(b[i]);
    }
    for (j = 0; j < n; j++)
    {
        if (ajMat[i][j] == 'y')
        {
            if (unVisit(b[j]))
            {
                insert(b[j]);
            }
        }
    }
    m = del();
    arr[p] = m;
    p++;
    return 0;
}
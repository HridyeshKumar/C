#include <stdio.h>
#include <stdlib.h>

int *stack = NULL;
int stackSize, top = -1;

/* push element to the top of stack */
void push(int data)
{
    if (top >= stackSize - 1)
    {
        printf("Stack overflow\n");
        return;
    }

    stack[++top] = data;
    printf("Data added to stack : %d\n", stack[top]);
}

/* check whether stack is empty or not */
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

/* pop/remove top element from stack */
void pop()
{
    if (isEmpty())
    {
        printf("Stack underflow\n");
        return;
    }
    printf("Data poped from stack : %d\n", stack[top]);
    stack[top--] = 0;
}

/* display elements in stack */
void display()
{
    int i = 0;
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    for (i = top; i >= 0; i--)
    {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}

int main()
{
    int size, data, ch;
    printf("Enter the size of the stack:");
    scanf("%d", &size);
    stackSize = size;
    stack = (int *) malloc(sizeof(int) * size);
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. isEmpty\n");
    printf("4. Display Elements\n");
    printf("5. Element count\n");
    printf("6. Exit\n");
    while (1)
    {
        printf("Enter your option:");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("Enter Element:");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                if (isEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is not Empty\n");
                break;
            case 4:
                display();
                break;
            case 5:
                if (isEmpty())
                    printf("Stack is empty\n");
                else
                    printf("Total Elements :%d\n", top + 1);
                break;
            case 6:
                exit(0);
            default:
                printf("You have entered wrong option\n");
                break;
        }

    }
    return 0;
}
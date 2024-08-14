#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //memory allocated using malloc
    ptr = (int *) malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        return 0;
    }

    printf("Enter elements of array: \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Elements of array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    //freeing memory of ptr allocated by malloc
    free(ptr);
    return 0;
}

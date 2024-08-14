#include<stdio.h>

int main()
{
    //variable declaration
    int size, arr1[10], arr2[10], count = 0, i, j;

    //take user input for array size
    printf("Enter number of elements you want to insert in array : ");
    scanf("%d", &size);

    //user input for array elements
    printf("Enter %d integers : \n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    //logic to check and remove duplicate elements from array
    for (i = 0; i < size; i++)
    {

        for (j = 0; j < count; j++)
        {
            if (arr1[i] == arr2[j])
            {
                break;
            }
        }

        if (j == count)
        {
            arr2[count] = arr1[i];
            count++;
        }
    }

    //to print array elements after removing duplicate elements
    printf("Array obtained after removing duplicate elements : \n");

    for (i = 0; i < count; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}

#include <stdio.h>

void printDistinct(int arr[], int n)
{
    int i = 0;
    // Pick all elements one by one
    for (i = 0; i < n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // If not printed earlier, then print it
        if (i == j)
            printf("%d ", arr[i]);
    }
}

int main()
{
    int arr_size, i;
    printf("Enter array size : ");
    scanf("%d", &arr_size);

    int arr[arr_size];

    printf("Enter %d array elements : \n", arr_size);
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("\n\nDistinct/Unique array elements : \n");

    int n = sizeof(arr) / sizeof(arr[0]);
    printDistinct(arr, n);

    return 0;
}

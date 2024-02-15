#include <stdio.h>
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int x = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int y = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = y;
                x++;
            }
        }
        if (!x)
            break;
    }
}

int main()
{
    int arr[100], i = 0;
    printf("Enter the integers: ");
    for (;; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == '\0')
            break;
    }
    sort(arr, i);
    printf("Sorted array:");
    for (int j = 0; j < i; j++)
        printf(" %d", arr[j]);
    return 0;
}
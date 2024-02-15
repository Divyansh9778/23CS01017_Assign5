#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no: ");
    scanf("%d", &n);
    for (int k = 1; k <= n; k++)
    {
        for (int i = n; i > k; i--)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
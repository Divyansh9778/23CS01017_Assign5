#include <stdio.h>
int main()
{
    int n, k, no = 0, s = 0, x[10];
    printf("Enter the number: ");
    scanf("%d", &n);
    int n1 = n, n2 = n;

    while (n1 != 0)
    {
        n1 /= 10;
        no++;
    }
    printf("No of digits are %d\n", no);

    for (int i = 1; i <= no; i++)
    {
        x[no - i] = n2 % 10;
        n2 /= 10;
    }

    for (int i = 0; i < no; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (x[i] == j && k != j)
            {
                s += x[i];
                k = j;
                break;
            }
        }
    }
    printf("Sum of unique digits is %d", s);
    return 0;
}
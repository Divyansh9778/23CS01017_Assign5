#include <stdio.h>
int main()
{
    int n, div, i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the divisor: ");
    scanf("%d", &div);

    while (n >= div)
    {
        n -= div;
        i++;
    }
    printf("Quotient = %d\n", i);
    printf("Remainder = %d", n);
    return 0;
}
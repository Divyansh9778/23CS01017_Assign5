#include <stdio.h>
int main()
{
    char k = 'Y';
    int s = 0;
    while (k == 'Y' || k == 'y')
    {
        int n;
        printf("Provide the number\n");
        scanf("%d", &n);
        if (n % 2 == 0)
            s += n;
        printf("Do you want to continue?\n");
    t:
        getchar();
        scanf("%c", &k);

        if (k == 'N' || k == 'n')
        {
            printf("The sum is: %d", s);
            break;
        }
        if (k != 'Y' && k != 'y' && k != 'N' && k != 'n')
        {
            printf("Not a valid input\n");
            goto t;
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n, o = 0, n1, temp[24];
    int x[4];
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 4; i++)
    {
        x[4 - i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++)
                {
                    if (l == k || l == j || l == i || k == j || k == i || j == i)
                        continue;
                    int q = 0;
                    n1 = x[i] * 1000 + x[j] * 100 + x[k] * 10 + x[l];
                    temp[o] = n1;
                    for (int p = o - 1; p >= 0; p--)
                    {
                        if (temp[o] == temp[p])
                            q++;
                    }
                    if (!q)
                        printf("%d: %d\n", o + 1, temp[o]);
                    o++;
                }
            }
        }
    }
    return 0;
}
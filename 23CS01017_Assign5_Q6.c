#include <stdio.h>
#include <string.h>
void word(char s[], char w[])
{
    int x = 0;
    if (s[0] - 97 < 0)
        s[0] += 32;
    if (w[0] - 97 < 0)
        w[0] += 32;

    for (int i = 0; i < strlen(w); i++)
    {
        for (int j = 0; j < strlen(s); j++)
        {
            if (w[i] == s[j])
                x++;
        }
    }
    if (x == strlen(w))
        printf("Gotcha..\nExit code TRUE");
    else
        printf("ERROR 404..\nMission failed we'll get 'em next time!!");
}

int main()
{
    char s[100], w[100];

    printf("Enter the character array: ");
    scanf("%s", s);
    printf("Enter the word: ");
    scanf("%s", w);

    word(s, w);
    return 0;
}
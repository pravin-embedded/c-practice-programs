#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Vowel(char *s)
{
    int i = 0;
    int found = 0;

    while (s[i] != '\0')
    {
        while (s[i] == ' ')
            i++;

        if (s[i] == '\0')
            break;

        int start = i;
        while (s[i] != '\0' && s[i] != ' ')
            i++;

        int end = i - 1;
        char first = tolower(s[start]);
        char last = tolower(s[end]);

        if ((first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') &&
            (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u'))
        {
            for (int j = start; j <= end; j++)
                putchar(s[j]);
            putchar(' ');
            found = 1;
        }
    }

    if (!found)
        printf("No word found");
    else
        printf("\n");
}

int main()
{
    char a[100];

    printf("Enter the string: ");
    fgets(a, 100, stdin);

    int l = strlen(a);
    if (a[l - 1] == '\n')
        a[l - 1] = '\0';

    Vowel(a);
    return 0;
}
#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 1000000
int main()
{
    char S[MAX_SIZE];
    fgets(S, sizeof(S), stdin);

    int wordCount = 0;
    int inWord = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (isalpha(S[i]))
        {
            if (!inWord)
            {
                wordCount++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    printf("%d\n", wordCount);

    return 0;
}

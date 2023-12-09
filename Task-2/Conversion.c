#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100000

int main()
{
    char S[MAX_SIZE];
    scanf("%s", S);

    int len = strlen(S);

    for (int i = 0; i < len; i++)
    {
        if (S[i] == ',')
        {
            printf(" ");
        }
        else if (S[i] >= 'a' && S[i] <= 'z')
        {
            printf("%c", S[i] - 'a' + 'A');
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            printf("%c", S[i] - 'A' + 'a');
        }
        else
        {
            printf("%c", S[i]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100000

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char S[MAX_SIZE];
        scanf("%s", S);

        int len = strlen(S);
        int good = 0;

        for (int i = 0; i < len - 2; i++)
        {
            if ((S[i] == '0' && S[i + 1] == '1' && S[i + 2] == '0') ||
                (S[i] == '1' && S[i + 1] == '0' && S[i + 2] == '1'))
            {
                good = 1;
                break;
            }
        }

        if (good)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}

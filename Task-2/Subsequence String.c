#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100000

int main()
{
    char S[MAX_SIZE];
    scanf("%s", S);

    int len = strlen(S);
    char target[] = "hello";
    int targetIndex = 0;

    for (int i = 0; i < len; i++)
    {
        if (S[i] == target[targetIndex])
        {
            targetIndex++;
        }

        if (targetIndex == 5)
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}

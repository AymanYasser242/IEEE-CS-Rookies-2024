#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100000
void encrypt(char *s)
{
    char key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; s[i] != '\0'; i++)
    {
        char *pos = strchr(original, s[i]);

        if (pos != NULL)
        {
            int index = pos - original;
            s[i] = key[index];
        }
    }
}

void decrypt(char *s)
{
    char key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; s[i] != '\0'; i++)
    {
        char *pos = strchr(key, s[i]);

        if (pos != NULL)
        {
            int index = pos - key;
            s[i] = original[index];
        }
    }
}

int main()
{
    int Q;
    scanf("%d", &Q);

    char S[MAX_SIZE];
    scanf("%s", S);

    if (Q == 1)
    {
        encrypt(S);
    }
    else if (Q == 2)
    {
        decrypt(S);
    }

    printf("%s\n", S);

    return 0;
}

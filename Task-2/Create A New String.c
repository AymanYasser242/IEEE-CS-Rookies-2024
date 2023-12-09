#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100000

int main()
{
    char S[MAX_SIZE], T[MAX_SIZE];

    scanf("%s", S);

    scanf("%s", T);

    printf("%lu %lu\n", strlen(S), strlen(T));

    printf("%s %s\n", S, T);

    return 0;
}

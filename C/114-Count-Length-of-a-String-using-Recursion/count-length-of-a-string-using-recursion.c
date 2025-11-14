#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countStringLength(char S[], int I)
{
    if (S[I] == '\0')
    {
        return 0;
    }

    int count = countStringLength(S, I + 1);

    return count + 1;
}

int main()
{
    char S[201];
    fgets(S, 201, stdin);

    int result = countStringLength(S, 0);

    printf("%d", result);

    return 0;
}
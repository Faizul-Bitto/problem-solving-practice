#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countStringLen(char S[])
{
    int stringLength = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {
        stringLength++;
    }

    return stringLength;
}

int main()
{
    char S[101];
    scanf("%s", &S);

    int stringLength = countStringLen(S);

    printf("%d", stringLength);

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char S[100];
        scanf("%s", &S);

        int stringLength = strlen(S);

        if (stringLength <= 10)
        {
            printf("%s\n", S);
        }

        if (stringLength > 10)
        {
            char firstChar = S[0];
            char lastChar = S[strlen(S) - 1];

            printf("%c%d%c\n", firstChar, (stringLength - 2), lastChar);
        }
    }

    return 0;
}
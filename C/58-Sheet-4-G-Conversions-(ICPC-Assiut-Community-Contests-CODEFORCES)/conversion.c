// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char S[100001];
    scanf("%s", &S);

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == ',')
        {
            S[i] = ' ';
        }

        int ascii = ("%d", S[i]);

        if ((ascii >= 65) && (ascii <= 90))
        {
            S[i] = S[i] + 32;
        }

        if ((ascii >= 97) && (ascii <= 122))
        {
            S[i] = S[i] - 32;
        }
    }

    printf("%s", S);

    return 0;
}
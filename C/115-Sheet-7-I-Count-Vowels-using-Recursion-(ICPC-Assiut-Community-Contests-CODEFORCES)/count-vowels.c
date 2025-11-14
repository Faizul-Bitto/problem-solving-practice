// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

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

    if ((S[I] == 'A') || (S[I] == 'E') || (S[I] == 'I') || (S[I] == 'O') || (S[I] == 'U') || (S[I] == 'a') || (S[I] == 'e') || (S[I] == 'i') || (S[I] == 'o') || (S[I] == 'u'))
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char S[201];
    fgets(S, 201, stdin);

    int result = countStringLength(S, 0);

    printf("%d", result);

    return 0;
}
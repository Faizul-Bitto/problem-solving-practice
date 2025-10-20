// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S[1000001];
    scanf("%s", S);

    int stringLength = strlen(S);

    int summation = 0;

    for (int i = 0; i < stringLength; i++)
    {
        int convertToInt = S[i] - '0';
        summation += convertToInt;
    }

    printf("%d", summation);

    return 0;
}
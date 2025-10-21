// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S[1001], T[1001];
    scanf("%s", &S);
    scanf("%s", &T);

    printf("%d %d\n", strlen(S), strlen(T));
    printf("%s%s\n", S, T);

    char temp;
    temp = S[0];
    S[0] = T[0];
    T[0] = temp;

    printf("%s %s", S, T);

    return 0;
}
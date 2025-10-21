// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

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
    printf("%s %s", S, T);

    return 0;
}
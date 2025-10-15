// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int X;
    scanf("%d", &X);

    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}
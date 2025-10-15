// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

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

    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            A[i] = 1;
            printf("%d ", A[i]);
        }
        else if (A[i] == 0)
        {
            A[i] = 0;
            printf("%d ", A[i]);
        }
        else
        {
            A[i] = 2;
            printf("%d ", A[i]);
        }
    }

    return 0;
}
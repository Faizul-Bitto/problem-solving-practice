// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int primaryDiagonalSummation = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                primaryDiagonalSummation += A[i][j];
            }
        }
    }

    int secondaryDiagonalSummation = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((i + j) == (N - 1))
            {
                secondaryDiagonalSummation += A[i][j];
            }
        }
    }

    printf("%d\n", abs(primaryDiagonalSummation - secondaryDiagonalSummation));

    return 0;
}
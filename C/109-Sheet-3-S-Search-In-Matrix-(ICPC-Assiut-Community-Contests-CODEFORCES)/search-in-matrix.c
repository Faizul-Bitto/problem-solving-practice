// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    bool found = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((A[i][j]) == X)
            {
                found = true;
                break;
            }
        }

        if (found == true)
        {
            break;
        }
    }

    if (found == true)
    {
        printf("will not take number\n");
    }
    else if (found == false)
    {
        printf("will take number\n");
    }

    return 0;
}
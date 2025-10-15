// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int min;

    int index = 0;

    int A[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] < min)
        {
            min = A[i];
            index = i;

            if (A[i] == min)
            {
                continue;
            }
        }
    }

    printf("%d %d", min, index);

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, min, max = 0, indexOfMinNumber = 0, indexOfMaxNumber = 0, temp;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            indexOfMaxNumber = i;
        }

        if (A[i] < min)
        {
            min = A[i];
            indexOfMinNumber = i;
        }
    }

    temp = A[indexOfMinNumber];
    A[indexOfMinNumber] = A[indexOfMaxNumber];
    A[indexOfMaxNumber] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
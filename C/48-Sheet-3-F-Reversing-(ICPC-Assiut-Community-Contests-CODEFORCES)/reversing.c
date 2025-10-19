// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

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

    int i = 0;
    int j = N - 1;

    while (i < j)
    {
        int temp;

        temp = A[i];
        A[i] = A[j];
        A[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printArrayReverse(int A[], int N, int I)
{
    if (I < 0)
    {
        return;
    }

    if (I % 2 == 0)
    {
        printf("%d ", A[I]);
    }

    printArrayReverse(A, N, I - 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int I = 0; I < N; I++)
    {
        scanf("%d", &A[I]);
    }

    printArrayReverse(A, N, (N - 1));

    return 0;
}
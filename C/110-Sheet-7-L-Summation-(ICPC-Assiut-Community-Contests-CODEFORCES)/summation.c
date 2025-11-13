// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int summation(int A[], int N, int I)
{
    if (I == N)
    {
        return 0;
    }

    long long int sum = A[I] + summation(A, N, (I + 1));

    return sum;
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    long long int result = summation(A, N, 0);

    printf("%lld", result);

    return 0;
}
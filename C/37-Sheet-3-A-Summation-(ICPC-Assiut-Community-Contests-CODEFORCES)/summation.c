// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    long long int sum = 0;

    int A[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 1; i <= N; i++)
    {
        sum = sum + A[i];
    }

    if (sum > 0)
    {
        printf("%lld", sum);
    }
    else if ((sum < 0))
    {
        printf("%lld", -(sum));
    }

    return 0;
}
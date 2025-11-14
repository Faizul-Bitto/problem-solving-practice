// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int factorial(int N)
{
    if (N == 1)
    {
        return 1;
    }

    long long int multiplication = factorial(N - 1);

    return (N * multiplication);
}

int main()
{
    int N;
    scanf("%d", &N);

    long long int factorialResult = factorial(N);

    printf("%lld", factorialResult);

    return 0;
}
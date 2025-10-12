// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, X, even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d\n", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &X);

        if (X % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (X > 0)
        {
            positive++;
        }

        if (X < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, X, max = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &X);

        if (X >= max)
        {
            max = X;
        }
    }

    printf("%d", max);
}
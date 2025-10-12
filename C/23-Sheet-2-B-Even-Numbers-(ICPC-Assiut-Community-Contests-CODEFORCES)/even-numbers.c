// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N == 1)
    {
        printf("-1");
    }

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
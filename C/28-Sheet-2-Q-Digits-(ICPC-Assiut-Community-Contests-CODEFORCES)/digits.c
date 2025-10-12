// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    int X;

    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
    {
        scanf("%d\n", X);

        printf("%d ", (X % 2));

        X = X / 10;
    }

    return 0;
}
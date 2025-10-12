// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", N, i, (N * i));
    }

    return 0;
}
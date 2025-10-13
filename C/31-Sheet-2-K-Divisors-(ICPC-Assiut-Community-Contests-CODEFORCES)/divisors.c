// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i = 1;

    while (i <= N)
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
        }
        i++;
    };

    return 0;
}
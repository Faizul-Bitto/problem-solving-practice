// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d", &N);

    if ((((N % 10) % (N / 10)) == 0) || (((N / 10) % (N % 10)) == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
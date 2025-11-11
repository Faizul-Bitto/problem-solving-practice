// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printFromOneToN(int i, int N)
{
    if (i == (N + 1))
    {
        return;
    }

    printf("%d\n", i);

    printFromOneToN((i + 1), N);
}

int main()
{
    int i = 1, N;

    scanf("%d", &N);

    printFromOneToN(i, N);

    return 0;
}

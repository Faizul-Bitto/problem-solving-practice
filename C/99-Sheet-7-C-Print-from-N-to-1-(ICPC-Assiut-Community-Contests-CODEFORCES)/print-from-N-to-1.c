// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printFromNToOne(int i, int N)
{
    if (i == 0)
    {
        return;
    }

    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d ", i);
    }

    printFromNToOne((i - 1), N);
}

int main()
{
    int N;
    scanf("%d", &N);

    int i = N;

    printFromNToOne(i, N);

    return 0;
}

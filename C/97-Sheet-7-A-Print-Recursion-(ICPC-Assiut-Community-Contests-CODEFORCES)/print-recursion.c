// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void iLoveRecursion(int x, int N)
{
    if (x == (N + 1))
    {
        return;
    }

    printf("I love Recursion\n");

    iLoveRecursion((x + 1), N);
}

int main()
{
    int N;
    scanf("%d", &N);

    iLoveRecursion(1, N);

    return 0;
}

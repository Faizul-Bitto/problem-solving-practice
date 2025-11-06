// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void add(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (i == N)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    add(N);

    return 0;
}

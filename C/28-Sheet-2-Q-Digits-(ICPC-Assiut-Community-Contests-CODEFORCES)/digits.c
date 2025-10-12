// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    int T;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &T);

        do
        {
            printf("%d ", T % 10);
            T /= 10;
        } while (T != 0);

        printf("\n");
    }

    return 0;
}
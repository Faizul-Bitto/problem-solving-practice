// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int star = N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        star--;

        printf("\n");
    }

    return 0;
}

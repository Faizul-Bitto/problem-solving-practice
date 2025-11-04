// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int star = 1;
    int space = N - 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        star += 2;
        space--;

        printf("\n");
    }

    return 0;
}

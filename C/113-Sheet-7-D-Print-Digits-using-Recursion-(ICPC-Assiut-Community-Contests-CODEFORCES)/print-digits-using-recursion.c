// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printDigits(N)
{
    if (N == 0)
    {
        return;
    }

    int lastDigit = N % 10;

    printDigits(N / 10);

    printf("%d ", lastDigit);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int N;
        scanf("%d", &N);

        if (N == 0)
        {
            printf("0");
        }

        printDigits(N);

        printf("\n");
    }

    return 0;
}
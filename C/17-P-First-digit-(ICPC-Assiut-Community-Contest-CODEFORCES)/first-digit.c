// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int X;
    scanf("%d", &X);

    int firstDigit = (X / 1000);

    if (firstDigit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}
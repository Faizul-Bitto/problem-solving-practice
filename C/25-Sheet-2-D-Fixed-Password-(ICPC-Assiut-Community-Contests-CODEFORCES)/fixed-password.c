// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;

    while (scanf("%d\n", &N))
    {
        if (N == 1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    };

    return 0;
}
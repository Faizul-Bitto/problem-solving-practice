// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char X;
    scanf("%c", &X);

    if ((X >= 'a') && (X <= 'z'))
    {
        X = X - 32;
        printf("%c", X);
    }
    else if ((X >= 'A') && (X <= 'Z'))
    {
        X = X + 32;
        printf("%c", X);
    }

    return 0;
}
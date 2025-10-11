// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int X, Y;
    scanf("%lld %lld %lld", &X, &Y);

    printf("%lld + %lld = %lld\n%lld * %lld = %lld\n%lld - %lld = %lld", X, Y, (X + Y), X, Y, (X * Y), X, Y, (X - Y));

    return 0;
}
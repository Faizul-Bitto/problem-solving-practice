// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    printf("Difference = %lld", ((A * B) - (C * D)));

    return 0;
}
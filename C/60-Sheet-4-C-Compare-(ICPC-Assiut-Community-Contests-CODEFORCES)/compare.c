// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char X[101], Y[101];
    scanf("%s", &X);
    scanf("%s", &Y);

    int compareValue = strcmp(X, Y);

    if (compareValue < 0)
    {
        printf("%s", X);
    }
    else if (compareValue > 0)
    {
        printf("%s", Y);
    }
    else if (compareValue == 0)
    {
        printf("%s", X);
    }

    return 0;
}
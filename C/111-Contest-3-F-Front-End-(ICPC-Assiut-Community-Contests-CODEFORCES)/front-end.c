// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (i == j)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf("%d %d ", a[i], a[j]);
        }

        i++;
        j--;
    }

    return 0;
}
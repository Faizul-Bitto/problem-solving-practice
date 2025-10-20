// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[100001];
    fgets(string, 100001, stdin);

    for (int i = 0; string[i] != '\\'; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}

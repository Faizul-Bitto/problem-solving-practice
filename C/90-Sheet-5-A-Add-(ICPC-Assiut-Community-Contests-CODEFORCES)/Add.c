// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", add(x, y));

    return 0;
}

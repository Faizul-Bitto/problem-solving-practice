// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char C;

    scanf("%c", &C);

    if (C == 'z')
    {
        printf("a");
    }
    else
    {
        int asciiOfTheChar = ("%d", C);
        printf("%c", (asciiOfTheChar + 1));
    }

    return 0;
}
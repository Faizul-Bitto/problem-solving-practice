// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char X;
    scanf("%c", &X);
    int ascii = ("%d", X);

    if ((ascii >= 48) && (ascii <= 57))
    {
        printf("IS DIGIT");
    }
    else if ((ascii >= 65) && (ascii <= 90))
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if ((ascii >= 97) && (ascii <= 122))
    {
        printf("ALPHA\nIS SMALL");
    }

    return 0;
}
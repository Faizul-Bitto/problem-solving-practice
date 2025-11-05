#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int charToAscii(char c)
{
    int asciiValue = ("%d", c);

    return asciiValue;
}

int main()
{
    char c;
    scanf("%c", &c);

    int result = charToAscii(c);

    printf("%d", result);

    return 0;
}
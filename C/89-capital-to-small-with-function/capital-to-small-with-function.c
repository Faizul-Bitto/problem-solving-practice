#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char capitalToSmall(char capital)
{
    char capitalToSmall = capital + 32;

    return capitalToSmall;
}

int main()
{
    char capital;
    scanf("%c", &capital);

    char result = capitalToSmall(capital);

    printf("%c", result);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char smallToCapital(char small)
{
    char smallToCapital = small - 32;

    return smallToCapital;
}

int main()
{
    char small;
    scanf("%c", &small);

    char result = smallToCapital(small);

    printf("%c", result);

    return 0;
}
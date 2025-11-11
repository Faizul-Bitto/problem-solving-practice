#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap_it(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("%d %d", *a, *b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    swap_it(&a, &b);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int star = N;
    int space = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");

        star--;
        space++;
    }

    return 0;
}
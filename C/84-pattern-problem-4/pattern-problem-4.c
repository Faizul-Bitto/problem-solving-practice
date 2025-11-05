#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int star = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < star; j++)
        {
            printf("%c ", (j + 'A'));
        }

        printf("\n");

        star++;
    }

    return 0;
}
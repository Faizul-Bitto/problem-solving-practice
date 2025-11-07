#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int hash = 1;
    int dash = 1;
    int space = N - 1;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= dash; j++)
            {
                printf("-");
            }
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
        }

        hash += 2;
        dash += 2;
        space--;

        printf("\n");
    }

    int hash2 = ((2 * N) - 1) - 2;
    int dash2 = ((2 * N) - 1) - 2;
    int space2 = 1;

    for (int i = N - 1; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= space2; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= dash2; j++)
            {
                printf("-");
            }
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= space2; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= hash2; j++)
            {
                printf("#");
            }
        }

        hash2 -= 2;
        dash2 -= 2;
        space2++;

        printf("\n");
    }

    return 0;
}
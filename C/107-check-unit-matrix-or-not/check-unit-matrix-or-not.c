#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int A[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    bool isSquare = true;

    if (row == column)
    {
        bool isUnit = true;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (i == j)
                {
                    // all diagonal elements must be 1, if not -> false
                    if ((A[i][j]) != 1)
                    {
                        isUnit = false;
                        break;
                    }
                }
                else
                {
                    // off-diagonal elements must be 0
                    if (A[i][j] != 0)
                    {
                        isUnit = false;
                        break;
                    }
                }
            }

            if (isUnit == false)
            {
                break;
            }
        }

        if (isUnit == true)
        {
            printf("This is a unit matrix.");
        }
        else
        {
            printf("This is a square matrix but not a unit matrix.");
        }
    }
    else
    {
        printf("This is not even a square matrix.");
    }

    return 0;
}

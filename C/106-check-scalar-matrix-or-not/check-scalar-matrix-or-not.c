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
        bool isScalar = true;
        int firstDiagonalValue = A[0][0]; // first diagonal element for reference

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (i == j)
                {
                    // all diagonal elements must be same
                    if (A[i][j] != firstDiagonalValue)
                    {
                        isScalar = false;
                        break;
                    }
                }
                else
                {
                    // off-diagonal elements must be 0
                    if (A[i][j] != 0)
                    {
                        isScalar = false;
                        break;
                    }
                }
            }

            if (isScalar == false)
            {
                break;
            }
        }

        if (isScalar == true)
        {
            printf("This is a scalar matrix.");
        }
        else
        {
            printf("This is a square matrix but not a scalar matrix.");
        }
    }
    else
    {
        printf("This is not a square matrix.");
    }

    return 0;
}

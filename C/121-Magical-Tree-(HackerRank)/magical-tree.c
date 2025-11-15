/*
    Problem Statement

    Jingle Bells, Jingle Bells - It's Christmas today! Ranja, our little friend, is all excited, but there's just one thing missing: a Christmas tree.

    Ranja will provide us with the size of the tree, N, and we'll work our holiday magic to print out that perfect tree. Let's make Ranja's Christmas tree dreams come true!

    You should see the sample input output to understand how the tree looks like.

    Input Format
        Input will contain only N.

    Constraints
        1 <= N <= 21 ; and N is odd.

    Output Format
        Output the tree of size N.

    Sample Input 0
        1

    Sample Output 0
         *
        ***
       *****
      *******
     *********
    ***********
         *
         *
         *
         *
         *
         *

    Sample Input 1
        3

    Sample Output 1

          *
         ***
        *****
       *******
      *********
     ***********
    *************
         ***
         ***
         ***
         ***
         ***

    Sample Input 2
        5

    Sample Output 2

           *
          ***
         *****
        *******
       *********
      ***********
     *************
    ***************
         *****
         *****
         *****
         *****
         *****
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int star = 1;
    int rows = (N / 2) + 6;
    int space = rows - 1;

    for (int i = 0; i < rows; i++)
    {
        if (N % 2 != 0)
        {
            for (int j = 0; j < space; j++)
            {
                printf(" ");
            }

            for (int j = 0; j < star; j++)
            {
                printf("*");
            }
        }

        star += 2;
        space--;

        printf("\n");
    }

    int star2 = 1;
    int space2 = ((2 * rows - 1) - N) / 2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < N; j++)
        {
            printf("*");
        }

        star2 += 2;

        printf("\n");
    }

    return 0;
}

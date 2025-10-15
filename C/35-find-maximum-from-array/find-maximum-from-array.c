// Take an array from input and print the maximum value of that array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] >= max)
        {
            max = array[i];
        }
    }

    printf("%d ", max);

    return 0;
}
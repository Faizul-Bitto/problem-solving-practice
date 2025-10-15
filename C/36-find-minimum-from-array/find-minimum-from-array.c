// Take an array from input and print the minimum value of that array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    int min;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] <= min)
        {
            min = array[i];
        }
    }

    printf("%d ", min);

    return 0;
}
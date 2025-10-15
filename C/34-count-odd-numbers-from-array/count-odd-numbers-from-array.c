// Take an array from input and count how many odd numbers are present in that array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if ((array[i] % 2) != 0)
        {
            oddCount++;
        }
    }

    printf("%d ", oddCount);

    return 0;
}
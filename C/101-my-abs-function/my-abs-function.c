#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int my_abs(int N)
{
    if (N > 0)
    {
        return N;
    }
    else
    {
        return -(N);
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int absoluteValue = my_abs(N);

    printf("%d", absoluteValue);

    return 0;
}
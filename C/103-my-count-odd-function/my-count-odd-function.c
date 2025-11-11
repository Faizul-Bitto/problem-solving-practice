#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countOdd(int A[], int N)
{
    int oddCount = 0;

    for (int i = 0; i < N; i++)
    {
        if ((i % 2) != 0)
        {
            oddCount++;
        }
    }

    return oddCount;
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int totalOddCount = countOdd(A, N);

    printf("%d", totalOddCount);

    return 0;
}
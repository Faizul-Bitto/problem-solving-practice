// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int minSum = 1000000000;

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int sum = A[i] + A[j] + (j - i);
                if (sum < minSum)
                {
                    minSum = sum;
                }
            }
        }

        printf("%d\n", minSum);
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N;
    bool isPalindrome = true;

    scanf("%d", &N);

    int A[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }

    int i = 1;
    int j = N;

    while (i < j)
    {
        if (A[i] == A[j])
        {
            isPalindrome = true;
        }
        else
        {
            isPalindrome = false;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome == true)
    {
        printf("YES");
    }

    if (isPalindrome == false)
    {
        printf("NO");
    }

    return 0;
}
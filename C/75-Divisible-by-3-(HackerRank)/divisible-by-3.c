/*
    Given a number of digits N, and a number of N digits, determine whether the number is divisible by 3.

    Note: Recall that a number is divisible by 3 if the sum of its digits is divisible by 3.

    Input Format
        First line will contain N, the number of digits of the number
        Second line will contain the number

    Constraints
        1 <= N <= 10^6

    Output Format
        Print "YES" (without quotes) if the number is divisible by 3.
        Otherwise, print "NO".

    Sample Input 0
        5
        12345

    Sample Output 0
        YES

    Explanation 0
        The number 12345 is divisible by 3.

    Sample Input 1
        4
        1234

    Sample Output 1
        NO

    Explanation 1
        The number is not divisible by 3
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    char number[n];
    scanf("%s", number);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (number[i] - '0');
    }

    if ((sum % 3) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
/*
    Two brothers, Rafi and Shafi, love spending time together. Rafi, the younger one, has just learned the basics of programming and is super excited to solve real problems. Seeing his enthusiasm, Shafi, the big brother and a coding pro, decides to test Rafi’s skills with a fun challenge. He gives Rafi two arrays A and B of the same size and says:

    Take each number from the first array and add it with the mirrored number from the second array. That means:

    The 1st number of the first array will be added with the last number of the second array. The 2nd number of the first array will be added with the 2nd last number of the second array. The 3rd number of the first array will be added with the 3rd last number of the second array… and so on. In short: For every position i, you add  with , where n is the size of the arrays.

    Finally, print the result array. Rafi smiles and grabs his laptop. Can you help him solve this challenge and make his big brother proud?

    Input Format
        First line: An integer , the size of the arrays.
        Second line:  space-separated integers, the elements of array A.
        Third line:  space-separated integers, the elements of array B.

    Constraints
        1 ≤n≤ 100
        −1000 ≤A[i] ≤1000
        −1000 ≤B[i] ≤1000

    Output Format
        Print n space-separated integers, the result array after mirror sum.

    Sample Input 0
        3
        1 3 4
        3 2 5

    Sample Output 0
        6 5 7

    Explanation 0
        Array A = [1, 3, 4]
        Reverse of B = [3, 2, 5] is [5, 2, 3]

    Sum:
        1 + 5 = 6
        3 + 2 = 5
        4 + 3 = 7
        
    Final result: 6 5 7
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[n], B[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    int sumValues[n];

    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        int value = A[i] + B[j];
        sumValues[i] = value;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sumValues[i]);
    }

    return 0;
}
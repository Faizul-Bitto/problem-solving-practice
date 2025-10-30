/*
    Rafi is back with another coding challenge from his big brother Shafi. This time, Shafi gives him an array of integers and says:

    “Pick any  numbers from the array to form a . If the pair contains exactly one  number, it’s a good pair. But if both numbers are  or both are , it’s not good.”

    Rafi’s task is to count how many good  he can make from the array. Can you help Rafi solve this challenge and level up his coding skills?

    Input Format

    First line: An integer , the size of the array.

    Second line:  space-separated integers, the elements of the array.

    Output Format

    Print a single integer: the number of good

    Sample Input 0
        5
        1 2 3 4 5

    Sample Output 0
        6

    Explanation 0

        All possible pairs:

        (1,2) ✅
        (1,3) ❌
        (1,4) ✅
        (1,5) ❌
        (2,3) ✅
        (2,4) ❌
        (2,5) ✅
        (3,4) ✅
        (3,5) ❌
        (4,5) ✅
        
        Total good pairs = 6
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    char numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int numberOfEvens = 0, numberOfOdds = 0;

    for (int i = 0; i < n; i++)
    {
        if ((numbers[i] % 2) == 0)
        {
            numberOfEvens++;
        }
        else
        {
            numberOfOdds++;
        }
    }

    printf("%d", (numberOfEvens * numberOfOdds));

    return 0;
}
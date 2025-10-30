/*
    You are given two strings S1, S2 and two integers - start and end. Your task is to take the characters from the second string (S2), starting at index start and ending at index end (inclusive), and add them to the end of the first string(S1).

    All indices are 0-based.

    Input Format
        The first line contains the first string S1.
        The second line contains the second string S2.
        The third line contains two integers start and end.

    Constraints
        1 ≤ |S1|, |S2| ≤ 1000 - Here, |S1| means length of S1
        0 ≤ start ≤ end < 1000

    Output Format
        Print the final string formed after adding the selected portion of the second string to the end of the first string.

    Sample Input 0
        hello
        world
        2 4

    Sample Output 0
        hellorld

    Explanation 0
        Characters of "world" from index 2 to 4 are "rld". After adding to "hello", the result becomes "hellorld".

    Sample Input 1
        good
        morning
        1 3

    Sample Output 1
        goodorn

    Explanation 1
        Characters of "morning" from index 1 to 3 are "orn". Result after adding → "goodorn".
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S1[1001];
    char S2[1001];
    char S3[1001];
    int start, end;
    scanf("%s", &S1);
    scanf("%s", &S2);
    scanf("%d %d", &start, &end);

    int lengthOfS1 = strlen(S1);

    for (int i = start; i <= end; i++)
    {
        S1[lengthOfS1++] = S2[i];
    }

    S1[lengthOfS1] = '\0';

    printf("%s", S1);

    return 0;
}
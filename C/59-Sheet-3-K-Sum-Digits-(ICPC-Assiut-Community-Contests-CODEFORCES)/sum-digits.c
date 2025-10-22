// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char stringOfDigits[N + 1];
    scanf("%s", stringOfDigits);

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += stringOfDigits[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}

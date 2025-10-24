// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        char S[55], T[55];
        scanf("%s %s", S, T);

        int lengthOfS = strlen(S);
        int lengthOfT = strlen(T);
        int maximumLength = 0;

        if (lengthOfS > lengthOfT)
        {
            maximumLength = lengthOfS;
        }
        else
        {
            maximumLength = lengthOfT;
        }

        for (int i = 0; i < maximumLength; i++)
        {
            if (i < lengthOfS)
                printf("%c", S[i]);
            if (i < lengthOfT)
                printf("%c", T[i]);
        }
        printf("\n");
    }

    return 0;
}

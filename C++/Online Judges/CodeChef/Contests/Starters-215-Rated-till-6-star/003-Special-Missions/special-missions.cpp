// https://www.codechef.com/START215D/problems/SPMISS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, C;
        cin >> N >> C;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        string S;
        cin >> S;

        int sumNormal = 0;
        int sumSpecial = 0;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
            {
                sumNormal += A[i];
            }
            else
            {
                sumSpecial += A[i];
            }
        }

        int withNormal = sumNormal;
        int withSpecial = sumNormal + sumSpecial - C;

        if (sumNormal >= C)
        {
            withNormal = max(withNormal, withSpecial);
        }

        int result = withNormal;

        cout << result << "\n";
    }

    return 0;
}

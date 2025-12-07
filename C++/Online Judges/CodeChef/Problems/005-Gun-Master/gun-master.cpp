// https://www.codechef.com/problems/GMGM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, D;
        cin >> N, D;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int switchCount = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] > D)
            {
                switchCount++;
            }

            if (A[i] <= D)
            {
                switchCount++;
            }
        }

        cout << switchCount << endl;
    }

    return 0;
}

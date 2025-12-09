// https://www.codechef.com/problems/GCEA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int minimumCoins = 0;

        for (int i = 0; i < N; i++)
        {
            minimumCoins += min((A[i] * X), Y);
        }

        cout << minimumCoins << endl;
    }

    return 0;
}
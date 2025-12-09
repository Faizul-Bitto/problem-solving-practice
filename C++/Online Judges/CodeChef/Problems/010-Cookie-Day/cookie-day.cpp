// https://www.codechef.com/problems/GCEA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int minimumWaste = INT_MAX;

        for (int i = 0; i < N; i++)
        {

            if (A[i] >= K)
            {
                minimumWaste = min((A[i] % K), minimumWaste);
            }
        }

        if (minimumWaste == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << minimumWaste << endl;
        }
    }

    return 0;
}
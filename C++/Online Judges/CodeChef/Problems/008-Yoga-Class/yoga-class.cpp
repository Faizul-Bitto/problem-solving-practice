// https://www.codechef.com/problems/YOGACLASS

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

        if (2 * X >= Y)
        {
            cout << N * X << endl;
        }
        else
        {
            if (N % 2 == 0)
            {
                cout << (N / 2) * Y << endl;
            }
            else
            {
                cout << (N / 2) * Y + X << endl;
            }
        }
    }

    return 0;
}
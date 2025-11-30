// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[N];

        int oddCounter = 0, evenCounter = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        if (N % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }

        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 0)
            {
                evenCounter++;
            }
            else
            {
                oddCounter++;
            }
        }

        int half = N / 2;

        cout << abs(oddCounter - half) << endl;
    }

    return 0;
}

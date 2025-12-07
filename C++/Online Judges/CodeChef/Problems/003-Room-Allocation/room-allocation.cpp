// https://www.codechef.com/problems/ROOMALLOC

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

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int count = 0;

        for (int i = 0; i < N; i++)
        {
            count += ceil(double(A[i]) / 2);
        }

        cout << count << endl;
    }

    return 0;
}

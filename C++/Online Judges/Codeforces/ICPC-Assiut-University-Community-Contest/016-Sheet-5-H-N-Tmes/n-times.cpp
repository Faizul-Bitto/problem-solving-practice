// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include <bits/stdc++.h>
using namespace std;

void printNTimes(string S, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << S << " ";
    }
}

int main()
{
    int T, N;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> N >> S;

        printNTimes(S, N);

        cout << endl;
    }

    return 0;
}

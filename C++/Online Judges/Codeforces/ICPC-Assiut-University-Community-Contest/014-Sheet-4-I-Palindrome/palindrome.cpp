// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string S2;
    S2 = S;

    reverse(S2.begin(), S2.end());

    if (S == S2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x, maximum = INT_MIN;

    while ((N--) && (cin >> x))
    {
        maximum = max(maximum, x);
    }

    cout << maximum << endl;

    return 0;
}

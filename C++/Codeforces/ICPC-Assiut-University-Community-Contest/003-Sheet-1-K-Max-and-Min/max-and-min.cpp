// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    cout << min({X, Y, Z}) << " " << max({X, Y, Z});

    return 0;
}
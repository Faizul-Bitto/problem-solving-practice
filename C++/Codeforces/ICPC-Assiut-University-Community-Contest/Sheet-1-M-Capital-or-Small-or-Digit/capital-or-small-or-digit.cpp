// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if ((int(X) >= 48) && (int(X) <= 57))
    {
        cout << "IS DIGIT";
    }
    else if ((int(X) >= 45) && (int(X) <= 90))
    {
        cout << "ALPHA\n"
             << "IS CAPITAL";
    }
    else if ((int(X) >= 97) && (int(X) <= 122))
    {
        cout << "ALPHA\n"
             << "IS SMALL";
    }

    return 0;
}
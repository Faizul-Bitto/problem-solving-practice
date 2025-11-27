// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        string S;
        cin >> S;

        if (S.size() <= 10)
        {
            cout << S << endl;
        }

        if (S.size() > 10)
        {
            cout << S.front() << S.size() - 2 << S.back() << endl;
        }

        n--;
    }

    return 0;
}
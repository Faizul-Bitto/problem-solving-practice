// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, countAntonWin = 0, countDanikWin = 0;
    cin >> n;

    string S;
    cin >> S;

    for (auto it = S.begin(); it < S.end(); it++)
    {
        if (*it == 'A')
        {
            countAntonWin++;
        }

        if (*it == 'D')
        {
            countDanikWin++;
        }
    }

    if (countAntonWin > countDanikWin)
    {
        cout << "Anton";
    }
    else if (countAntonWin < countDanikWin)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}
// https://www.codechef.com/problems/WECNITK

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if ((s.size() == 7) && (s[i] == 'W') && (s[i + 1] == 'E') && (s[i + 2] == 'C') && (s[i + 3] == 'N') && (s[i + 4] == 'I') && (s[i + 5] == 'T') && (s[i + 6] == 'K'))
        {
            cout << "Welcome to Web Club!";
            break;
        }
        else
        {
            cout << "Access denied";
            break;
        }
    }

    return 0;
}
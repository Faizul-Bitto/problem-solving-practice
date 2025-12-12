#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        char c = s[i];

        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }

        cout << c;
    }

    return 0;
}
// https://www.codechef.com/problems/HATTRICK

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        char C[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> C[i];
        }

        bool hattrick = false;

        for (int i = 0; i < 6; i++)
        {
            if (C[i] == 'W' && C[i + 1] == 'W' && C[i + 2] == 'W')
            {
                hattrick = true;
                break;
            }
        }

        if (hattrick)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

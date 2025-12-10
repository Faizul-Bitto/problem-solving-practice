// https://www.codechef.com/problems/CS2023_STK

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int countA = 0, maxA = 0;
        int countB = 0, maxB = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                countA++;
                maxA = max(maxA, countA);
            }
            else
            {
                countA = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] > 0)
            {
                countB++;
                maxB = max(maxB, countB);
            }
            else
            {
                countB = 0;
            }
        }

        if (maxA == maxB)
        {
            cout << "Draw" << endl;
        }
        else if (maxA > maxB)
        {
            cout << "Om" << endl;
        }
        else
        {
            cout << "Addy" << endl;
        }
    }
}
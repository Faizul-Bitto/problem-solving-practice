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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maximum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            maximum = max(a[i], maximum);
        }

        cout << maximum << endl;
    }

    return 0;
}
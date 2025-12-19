#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--)
    {
        int value;
        cin >> value;
        bool found = false;

        int left = 0;
        int right = n - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (a[mid] == value)
            {
                found = true;
                break;
            }
            else if (a[mid] > value)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if (found)
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
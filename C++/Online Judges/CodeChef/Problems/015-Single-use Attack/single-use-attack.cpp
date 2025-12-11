// https://www.codechef.com/problems/SINGLEUSE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;

        int normalOnly = ceil((double(h)) / x);

        int afterSpecial = 1 + ceil((double(h - y)) / x);

        cout << min(normalOnly, afterSpecial) << endl;
    }

    return 0;
}

// https://www.codechef.com/START215D/problems/GEMBUND

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int R, G, B;
        cin >> R >> G >> B;

        int minimumNumber = min({R, G, B});

        int result = (minimumNumber * 10) + (R - minimumNumber) * 3 + (G - minimumNumber) * 3 + (B - minimumNumber) * 3;

        cout << result << endl;
    }

    return 0;
}
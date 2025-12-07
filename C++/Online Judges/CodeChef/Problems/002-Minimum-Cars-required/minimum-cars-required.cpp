// https://www.codechef.com/problems/MINCARS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        float N;
        cin >> N;

        cout << ceil(N / 4);

        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    double commission = (x * 20.0) / 100.0;

    if (commission == 0)
    {
        cout << 0;
        return 0;
    }

    long long courses = ceil(100.0 / commission);

    cout << courses;
    return 0;
}

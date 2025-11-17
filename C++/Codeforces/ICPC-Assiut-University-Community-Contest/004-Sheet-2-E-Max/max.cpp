// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x, maximum = 0;

    while ((N--) && (cin >> x))
    {
        maximum = max(maximum, x);
    }

    cout << maximum << endl;

    return 0;
}

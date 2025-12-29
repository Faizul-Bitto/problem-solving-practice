#include <bits/stdc++.h>
using namespace std;

vector<int> sumOfArray(const vector<int> &a)
{
    vector<int> prefix(a.size());
    prefix[0] = a[0];

    for (int i = 1; i < a.size(); i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }

    return prefix;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> result = sumOfArray(a);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
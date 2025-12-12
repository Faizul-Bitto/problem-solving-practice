#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int oddSum = 0, evenSum = 0;

    for (int i = s.size() - 1; i >= 0; i -= 2)
    {
        oddSum += (s[i] - '0');
    }

    for (int i = s.size() - 2; i >= 0; i -= 2)
    {
        evenSum += (s[i] - '0');
    }

    int difference = abs(oddSum - evenSum);

    if (difference % 11 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
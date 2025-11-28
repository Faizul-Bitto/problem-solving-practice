#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;

        int summationOfFirstThreeDigit = 0, summationOfLastThreeDigit = 0;

        for (int i = 0; i < 3; i++)
        {
            summationOfFirstThreeDigit += int(S[i]);
        }

        for (int i = 3; i < S.size(); i++)
        {
            summationOfLastThreeDigit += int(S[i]);
        }

        if (summationOfFirstThreeDigit == summationOfLastThreeDigit)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
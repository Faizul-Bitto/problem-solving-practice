#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        string S;
        cin >> S;

        int freq[26] = {0};
        int answer = 0;

        for (int i = 0; i < n; i++)
        {
            int idx = S[i] - 'A';

            if (freq[idx] == 0)
            {
                answer += 2;
            }
            else
            {
                answer += 1;
            }

            freq[idx]++;
        }

        cout << answer << endl;
    }

    return 0;
}
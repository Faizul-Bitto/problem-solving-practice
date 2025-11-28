// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;

    for (auto it = S.begin(); it < S.end(); it++)
    {
        if ((*it == 'E') || (*it == 'e'))
        {
            countE++;
        }

        if ((*it == 'G') || (*it == 'g'))
        {
            countG++;
        }

        if ((*it == 'Y') || (*it == 'y'))
        {
            countY++;
        }

        if ((*it == 'P') || (*it == 'p'))
        {
            countP++;
        }

        if ((*it == 'T') || (*it == 't'))
        {
            countT++;
        }
    }

    cout << min({countE, countG, countY, countP, countT});

    return 0;
}

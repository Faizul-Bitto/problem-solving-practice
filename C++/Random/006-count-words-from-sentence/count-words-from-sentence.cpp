#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    string X;
    cin >> X;

    stringstream ss(S);
    string word;

    int count = 0;

    while (ss >> word)
    {
        if (word == X)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
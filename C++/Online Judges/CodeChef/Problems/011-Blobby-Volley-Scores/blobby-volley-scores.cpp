// https://www.codechef.com/problems/BLOBBYVOLLEY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int alice = 0, bob = 0;
        char server = 'A';

        for (char c : s)
        {

            if (c == server)
            {
                if (server == 'A')
                {
                    alice++;
                }
                else
                {
                    bob++;
                }
            }
            else
            {
                server = c;
            }
        }

        cout << alice << " " << bob << endl;
    }
}
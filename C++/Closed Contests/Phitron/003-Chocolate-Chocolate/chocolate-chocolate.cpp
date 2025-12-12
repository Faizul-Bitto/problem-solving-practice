#include <bits/stdc++.h>
using namespace std;

int getExtra(int wrappers)
{
    if (wrappers < 3)
        return 0;

    int extra = wrappers / 3;
    int leftover = wrappers % 3;

    return extra + getExtra(extra + leftover);
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int mainChocolates = N / 5;
        int total = mainChocolates + getExtra(mainChocolates);

        cout << total << "\n";
    }
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[1001];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int fre[200001] = {0};

    for (int i = 0; i < N; i++)
    {
        fre[A[i] + 100000]++;
    }

    int minimumElement = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < minimumElement)
        {
            minimumElement = A[i];
        }
    }

    int freq = fre[minimumElement + 100000];

    if (freq % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }

    return 0;
}

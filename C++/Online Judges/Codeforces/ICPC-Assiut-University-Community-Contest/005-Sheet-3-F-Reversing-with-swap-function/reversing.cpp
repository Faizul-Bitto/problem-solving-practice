// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int i = 0;
    int j = N - 1;

    while (i < j)
    {
        swap(A[i], A[j]);

        i++;
        j--;
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}

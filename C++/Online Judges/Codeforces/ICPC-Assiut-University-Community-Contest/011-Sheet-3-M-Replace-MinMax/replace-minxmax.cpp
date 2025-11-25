// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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

    int minimumNumber = INT_MAX;
    int maximumNumber = INT_MIN;
    int minimumNumberIndex = INT_MAX;
    int maximumNumberIndex = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < minimumNumber)
        {
            minimumNumber = A[i];
            minimumNumberIndex = i;
        }

        if (A[i] > maximumNumber)
        {
            maximumNumber = A[i];
            maximumNumberIndex = i;
        }
    }

    swap(A[minimumNumberIndex], A[maximumNumberIndex]);

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}

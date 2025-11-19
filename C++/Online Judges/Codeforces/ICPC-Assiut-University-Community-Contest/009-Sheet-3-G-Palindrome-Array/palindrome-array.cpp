// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

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

    bool isPalindrome = true;

    while (i < j)
    {
        if (A[i] != A[j])
        {
            isPalindrome = false;
            break;
        }

        if (isPalindrome == false)
        {
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

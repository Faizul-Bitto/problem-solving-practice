#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int *A = new int[N];

    // taking A inputs
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int M;
    cin >> M;

    int *B = new int[M];

    // copying A to B
    for (int i = 0; i < M; i++)
    {
        B[i] = A[i];
    }

    delete[] A;

    // taking rest values to B
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    // printing B
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}
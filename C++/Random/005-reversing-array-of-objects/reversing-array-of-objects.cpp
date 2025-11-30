#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int N;
    cin >> N;

    Student A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].name >> A[i].roll >> A[i].marks;
    }

    int i = 0;
    int j = N - 1;

    while (i < j)
    {
        Student temp;

        temp = A[i];
        A[i] = A[j];
        A[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i].name << " " << A[i].roll << " " << A[i].marks << endl;
    }

    return 0;
}
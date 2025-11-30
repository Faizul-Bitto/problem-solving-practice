#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student left, Student right)
{
    if (left.marks == right.marks)
    {
        if (left.roll < right.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (left.marks > right.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N;
    cin >> N;

    Student A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].name >> A[i].roll >> A[i].marks;
    }

    sort(A, (A + N), cmp);

    for (int i = 0; i < N; i++)
    {
        cout << A[i].name << " " << A[i].roll << " " << A[i].marks << endl;
    }

    return 0;
}
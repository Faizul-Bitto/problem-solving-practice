/*
    Problem Statement
    A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

    Input Format
        First line will contain T, the number of test cases.
        For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.

    Constraints
        1 <= T <= 1000
        1 <= ID <= 3
        1 <= |Name| <= 100
        'A' <= Section <= 'Z'
        0 <= Total Marks <= 100

    Output Format
        Ouptut the information as asked in the question.

    Sample Input 0
        3
        1 sakib A 50
        2 rakib D 96
        3 akib C 90
        1 sakib A 50
        2 rakib D 96
        3 akib C 96
        1 sakib A 50
        2 rakib D 50
        3 akib C 40

    Sample Output 0
        2 rakib D 96
        2 rakib D 96
        1 sakib A 50
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int userId;
    char name[101];
    char section;
    int total_marks;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student a, b, c;

        cin >> a.userId >> a.name >> a.section >> a.total_marks;
        cin >> b.userId >> b.name >> b.section >> b.total_marks;
        cin >> c.userId >> c.name >> c.section >> c.total_marks;

        Student maxMarksHolder = a;

        if (b.total_marks > maxMarksHolder.total_marks)
        {
            maxMarksHolder = b;
        }
        else
        {
            if (b.total_marks == maxMarksHolder.total_marks)
            {
                if (b.userId < maxMarksHolder.userId)
                {
                    maxMarksHolder = b;
                }
            }
        }

        if (c.total_marks > maxMarksHolder.total_marks)
        {
            maxMarksHolder = c;
        }
        else
        {
            if (c.total_marks == maxMarksHolder.total_marks)
            {
                if (c.userId < maxMarksHolder.userId)
                {
                    maxMarksHolder = c;
                }
            }
        }

        cout << maxMarksHolder.userId << " " << maxMarksHolder.name << " "
             << maxMarksHolder.section << " " << maxMarksHolder.total_marks << endl;
    }

    return 0;
}

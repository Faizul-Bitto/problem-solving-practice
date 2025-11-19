#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(string name, int roll, char section, double math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student John("John Doe", 1, 'B', 99, 6);
    Student Jane("Jane Smith", 2, 'C', 85, 9);
    Student Max("Max Payne", 3, 'D', 93, 5);

    cout << John.name << " " << John.roll << " " << John.section << " "
         << John.math_marks << " " << John.cls << endl;

    cout << Jane.name << " " << Jane.roll << " " << Jane.section << " "
         << Jane.math_marks << " " << Jane.cls << endl;

    cout << Max.name << " " << Max.roll << " " << Max.section << " "
         << Max.math_marks << " " << Max.cls << endl;

    cout << max({John.math_marks, Max.math_marks, Jane.math_marks}) << endl;

    int max = 0;

    Student gotMax = John;

    if (Jane.math_marks > gotMax.math_marks)
    {
        gotMax = Jane;
    }

    if (Max.math_marks > gotMax.math_marks)
    {
        gotMax = Max;
    }

    cout << gotMax.name << " " << gotMax.math_marks;

    return 0;
}
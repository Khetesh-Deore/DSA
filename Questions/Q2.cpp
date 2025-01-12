/*
A school has following rules for grading system :
a. Below 25 -F
b. 25 to 44 -E
c. 45 to 49 -D
d. 50 to 59 -C
e. 60 to 79 -B
f. 80 to 100 -A
Ask user to enter marks and print the corresponding grade
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mark;
    cout << "Enter the marks :";
    cin>>mark;
    if (mark >= 80 and mark <= 100)
    {
        cout << "\nGrade :A";
    }
    else if (mark >= 60 and mark <= 79)
    {
        cout << "\nGrade :B";
    }
    else if (mark >= 50 and mark <= 59)
    {
        cout << "\nGrade :C";
    }
    else if (mark >= 45 and mark <= 49)
    {
        cout << "\nGrade :D";
    }
    else if (mark >= 25 and mark <= 44)
    {
        cout << "\nGrade :E";
    }
    else if (mark >= 0 and mark < 25)
    {
        cout << "\nGrade :F";
    }
    return 0;
}
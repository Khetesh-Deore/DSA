/*
take theday no and print the corresponding day
for 1.print Monday,
for 2.print  tuesday and so on for 7 print Sunday */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Day(1 to 7) :";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
    case 7:
        cout << "Sunday";
        break;
      default:
        cout<<"Please Enter the No. between 1 to 7 ";  
    }
}
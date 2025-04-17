/*
Problem statement
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.



Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891



*/
#include <bits/stdc++.h>
using namespace std;

int question(int n)
{
    int y;
    int z = 0;

    while (n != 0)
    {
        y = n % 10;
        n = n / 10;
        z = (z * 10) + y;
    }
    return z;
}
int main()
{
    int n;
    cout << "Enter the Digit. : ";
    cin >> n;
    int y = question(n);
    cout << y;
    return 0;
}

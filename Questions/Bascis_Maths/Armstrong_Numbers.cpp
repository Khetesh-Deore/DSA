/*
Problem statement
You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
1


Sample Output 1 :
true


Explanation of Sample Input 1 :
1 is an Armstrong number as, 1^1 = 1.


Sample Input 2 :
103


Sample Output 2 :
false


Sample Input 3 :
1634


Sample Output 3 :
true


Explanation of Sample Input 3 :
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634



*/
#include <bits/stdc++.h>
using namespace std;

bool question(int n)
{
    int p = n;
    int q=n;
    int arm = 0;
    int y;
    int z = 0;
    int count = 0;
    while (q != 0)
    {
        q = q / 10;
        count++;
    }
    cout<<"count"<<count<<endl;
    while (n != 0)
    {
        y = n % 10;
        z = pow(y, count);
        arm = arm + z;
        n = n / 10;
    }
    if (arm == p)
    {
        return true;
        
    }
    else
        return false;
}
int main()
{
    int n;
    cout << "Enter the Digit. : ";
    cin >> n;
    bool y = question(n);
    cout << y;
    return 0;
}

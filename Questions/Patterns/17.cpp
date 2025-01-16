/*
Problem statement
Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

Example:
Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec
Sample Input 1:
3
Sample Output 1:
    A
  A B A
A B C B A
Sample Input 2 :
1
Sample Output 2 :
A
*/

#include <bits/stdc++.h>
using namespace std;
void print(int n)
{

    for (int i = 0; i <= n; i++)
    {   
        for (int j = 1; j <=n-i; j++)
        {
            cout <<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout <<char(64+j)<< " ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout <<char(64+i-j)<<" ";
        }

        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the N : ";
    cin >> n;
    print(n);
    return 0;
}
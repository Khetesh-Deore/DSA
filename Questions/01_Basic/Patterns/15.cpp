/*
Problem statement
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

You must print a matrix corresponding to the given Reverse Letter Triangle.

Example:
Input: ‘N’ = 3

Output: 

A B C
A B
A
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec
Sample Input 1:
3
Sample Output 1:
A B C
A B
A
Sample Input 2 :
4
Sample Output 2 :
A B C D
A B C
A B
A
Sample Input 3 :
7
Sample Output 3 :
A B C D E F G 
A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
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
            cout <<char(64+j)<< " ";
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
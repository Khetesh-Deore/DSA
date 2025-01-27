/*
Input Format: N = 3
Result: 
C
B C
A B C

Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/

#include <bits/stdc++.h>
using namespace std;
void print(int n)
{

    for (int i = 0; i <= n; i++)
    {   
        
       
        for (int j = 1; j <= i ; j++)
        {
            cout <<char(64+n-i+j)<<" ";
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
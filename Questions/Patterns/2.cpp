/*
Enter the N : 5
 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
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

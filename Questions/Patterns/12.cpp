/*
Enter the N : 4

1      1
12    21
123  321
12344321
*/

#include <bits/stdc++.h>
using namespace std;
void print(int n)
{

    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << j;
        }
        int gap = ((2 * (n - 1)) - 2 * (i - 2));
        for (int j = 1; j <= gap; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i - 1; j++)
        {
            cout << i - j;
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
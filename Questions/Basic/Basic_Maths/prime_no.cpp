/*

*/
#include <bits/stdc++.h>
using namespace std;

bool question(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
                count++;
        }
    }
    if (n == 2)
        return true;
    else if (n == 1)
        return false;
    else if (count == 2)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cout << "Enter the Digit. : ";
    cin >> n;
    bool i = question(n);
    cout << i;

    return 0;
}

/* O(N)*/
#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    if (n == 0)
        return 1;
    return (n * f(n - 1));
}
int main()
{
    int n;
    cout << "Enter the N: ";
    cin >> n;
    int fact =f(n);
     cout<<fact;
    return 0;
}
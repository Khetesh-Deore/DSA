#include <bits/stdc++.h>
using namespace std;
int f(vector<int>&arr, int n)
{
    int xor1=0,xor2=0;
    int m=n-1;
    for(int i =0;i<m;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor1^xor2;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
   vector<int>arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

  cout<<f(arr,n+1);

    return 0;
}
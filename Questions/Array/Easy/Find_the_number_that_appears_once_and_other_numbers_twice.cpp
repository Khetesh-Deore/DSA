#include <bits/stdc++.h>
using namespace std;
int f(vector<int>&arr, int n)
{
    int xorr=0;
    for(int i =0;i<n;i++)
    {
        xorr=xorr^arr[i];
        
    }
    
    return xorr;
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

  cout<<f(arr,n);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &arr, int n)
{
    map<int,int>mpp;   //NlogN
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second>n/2)
        {
            return it.first;
        }
    }

    
}

int main()
{
    int n;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
cout<< f(a, n);
    

    return 0;
}
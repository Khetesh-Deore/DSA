#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &arr, int n)
{
    int mini =arr[0];
    int maxProfit=0;
    for(int i=0;i<n;i++)
    {
        int cost =arr[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,arr[i]);
    }
    
         return maxProfit;
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
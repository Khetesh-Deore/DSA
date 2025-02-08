#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> arr, int n)
{  
    int maxi=INT_MIN;
    vector<int>ans;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi=max(arr[i],maxi);
    }
    reverse(ans.begin(),ans.end());
    return ans; 
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

    vector<int> final = f(a, n);
    for (int num : final)
    {
        cout << num << " ";
    }

    return 0;
}
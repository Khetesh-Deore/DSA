#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> &arr, int n)
{
    vector<int>ans(n,0);
    int posIndex=0,negIndex=1;
    for(int i=0; i<n;i++)
    {
        if(arr[i]<0)
        {
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
        else
        {
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
    }
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
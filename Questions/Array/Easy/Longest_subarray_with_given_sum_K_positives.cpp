#include <bits/stdc++.h>
using namespace std;
int f(vector<int>&arr, int n,int k)
{  
    int left =0,right=0;
    long long sum =arr[0];
    int maxLen =0;
    while(right<n)
    {
        while(left<=right && sum >k)
        {
            sum-=arr[left];
            left++;

        }
        if(sum==k)
        {
            maxLen=max(maxLen,right-left+1);

        }
        right++;
        if(right<n)
        {
            sum+=arr[right];
        }

    }
    return maxLen;
}

int main()
{
    int n,m;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout<<"Enter the K : ";
    cin>>m;
   vector<int>arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

  cout<<f(arr,n,m);

    return 0;
}
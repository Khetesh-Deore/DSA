#include <bits/stdc++.h>
using namespace std;
int f(vector<int>&arr, int n)
{  int max1=0;
int count=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==1)
    {
        count++;
         max1=max(count,max1);
    }
    else{
        count=0;
    }
}
    
    return max1;
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
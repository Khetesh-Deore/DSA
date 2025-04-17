#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int>&arr, int n,int d)
{  d=d%n;
   int  temp[d];
       for (int i = 0; i < d; i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d; i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }
        
    return arr;
}

int main()
{
    int n,d;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout<<"How many times you want to rotate :";
    cin>>d;
   vector<int>arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> final = f(arr,n,d);
      for (int num : final) {
        cout << num << " ";
    }

    return 0;
}
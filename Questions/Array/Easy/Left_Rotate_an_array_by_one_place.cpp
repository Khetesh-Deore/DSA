#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int>&arr, int n)
{
   int  temp= arr[0];
       for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
            }
            arr[n-1]=temp;
    return arr;
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

    vector<int> final = f(arr,n);
      for (int num : final) {
        cout << num << " ";
    }

    return 0;
}
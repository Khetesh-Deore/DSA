#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{ 
   if(n==0)return 0;
   if(n==1)return arr[0];
   return arr[0]+sum(arr+1,n-1);
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sum(arr, n);

    return 0;
}
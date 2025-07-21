#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int n,int target)
{
 if(n==0 )return false;
 if(arr[0]==target)return true;
 else return  search(arr+1,n-1,target);
    
}

int main()
{
    int n,target;
    cout << "Enter the number of elements: ";
    cin >> n>> target;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout <<  search(arr, n,target);

    return 0;
}
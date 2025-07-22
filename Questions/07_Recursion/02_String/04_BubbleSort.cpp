#include <bits/stdc++.h>
using namespace std;
void BubbleSort( int arr[], int n)
{
 
 if(n==0)return;

for(int i=0;i<n-1;i++){
	if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
}
BubbleSort(arr,n-1);
    
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
	BubbleSort(arr,n);
 for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
   

    return 0;
}
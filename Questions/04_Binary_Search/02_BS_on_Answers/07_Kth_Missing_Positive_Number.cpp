
#include <bits/stdc++.h>
using namespace std;
int  MissingNo(vector<int>arr,int k){
	int low=0;
	int high=arr.size()-1;
while(low<=high){
	int mid=low+((high-low)/2);
	int missing=arr[mid]-(mid+1);
	if(missing<k)low=mid+1;
	else high=mid-1;
}
return k+high+1; // k+low

}
int main()
{
    int n,k,m;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
	cout<<"Enter the K to find Kth missing No. :";
	cin>>m;
	
    cout<< MissingNo(a,m);
    

    return 0;
}
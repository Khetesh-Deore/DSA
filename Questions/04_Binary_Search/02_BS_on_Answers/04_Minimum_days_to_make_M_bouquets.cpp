#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int>&arr,int day , int m,int k){
	int cnt=0;
	int noOfB=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]<=day)cnt++;
		else{
			noOfB+=(cnt/k);
			cnt=0;
		}

	}
	noOfB+=(cnt/k);
	return noOfB>=m;
}
 int minDays(vector<int>& bloomDay, int m, int k){
           long long val=m*1LL*k*1LL;
		   if(val>bloomDay.size())return -1;
		   int mini=INT_MAX;
		   int maxi=INT_MIN;
		   for(int i=0;i<bloomDay.size();i++){
			mini=min(mini,bloomDay[i]);
			maxi=max(maxi,bloomDay[i]);

		   }
		   int low=mini,high=maxi;
		   while(low<=high){
			int mid=low+((high-low)/2);
			if(possible(bloomDay,mid,m,k)){
				high=mid-1;
			}
			else low=mid+1;
		   }
		   return low;
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
	cout<<"Enter the M :";
	cin>>m;
	cout<<"Enter the k :";
	cin>>k;
    cout<< minDays(a, m,k);
    

    return 0;
}
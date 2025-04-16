#include <bits/stdc++.h>
using namespace std;
int first(vector<int> nums, int x) {
	
	int first=-1;
	int low=0;
	int high =nums.size()-1;
	while(low<=high){
		 int mid=(low+ high)/2;
		 if(nums[mid]==x){
			first=mid;
			high=mid-1;
		 }
		 else if(nums[mid]<x){
			low=mid +1;
		 }
		 else high=mid-1;
	}
	return first;
}
int last(vector<int> nums, int x) {
	
	int last =-1;
	int low=0;
	int high=nums.size();
	while(low<=high){
		int mid=(low+ high)/2;
		if(nums[mid]==x){
		   last=mid;
		   low=mid+1;
		}
		else if(nums[mid]<x){
		   low=mid +1;
		}
		else high=mid-1;
   }
   return last;

	
}
vector<int> searchRange(vector<int>& nums, int target) {
	int f=first(nums, target);
	if(f==-1)return {-1,-1};
	return {f, last(nums, target)};
}


int main()
{
    int n,k;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
	cout<<"Enter the target K:";
	cin>>k;
    vector<int>ans=searchRange(a, k);
	cout<<ans[0]<<" "<<ans[1];
    

    return 0;
}
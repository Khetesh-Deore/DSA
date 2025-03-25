#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums,int target)
{
	vector<vector<int>>ans;
	sort(nums.begin(),nums.end());
	int n=nums.size();
	for(int i=0;i<n;i++){
		if(i>0 && nums[i]==nums[i-1])continue;
		for(int j=i+1;j<n;j++){
			if(j!=(i+1) && nums[j]==nums[j-1])continue;
			int k=j+1;
			int l =n-1;
			while(k<l){
				long long sum=nums[i];
				sum+=nums[j];
				sum+=nums[k];
				sum+=nums[l];
				if(sum==target){
					vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
					ans.push_back(temp);
					k++,l--;
					while(k<l && nums[k]==nums[k-1])k++;
					while(k<l && nums[l]==nums[l+1])l--;
				}
				else if(sum<target)k++;
				else l--;
			}
		}
	}
	return ans;
}

int main()
{
	int n,target;
	cout << "Enter the Value of N:";
	cin >> n;
	cout<<"Enter the Element of array :";
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >>a[i];
	}
	cout<<"Enter the target:";
	cin>>target;
	
	vector<vector<int>> ans = fourSum(a,target);
	for (auto it : ans)
	{
		for (auto ele : it)
		{
			cout << ele << " ";
		}
		cout << "\n";
	}
	return 0;
}
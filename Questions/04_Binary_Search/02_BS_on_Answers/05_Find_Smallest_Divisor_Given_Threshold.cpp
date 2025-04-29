#include <bits/stdc++.h>
using namespace std;
int sumByD(vector<int>arr,int div){
	int sum=0;
	int n=arr.size();
	for(int i=0;i<n;i++)sum=sum+ceil((double)(arr[i])/(double)(div));
	return sum;
}
int smallestDivisor(vector<int>& nums, int threshold) {
        int low=0;
		int high=*max_element(nums.begin(),nums.end());
		while(low<=high){
			int mid=low+((high-low)/2);
			if(sumByD(nums,mid)<=threshold)high=mid-1;
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
	cout<<"Enter the Threshold :";
	cin>>m;
	
    cout<< smallestDivisor(a, m);
    

    return 0;
}
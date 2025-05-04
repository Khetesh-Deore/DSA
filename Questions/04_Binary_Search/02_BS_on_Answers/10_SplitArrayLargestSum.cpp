
#include <bits/stdc++.h>
using namespace std;
int countSubarrays(vector<int>& nums, int maxSum) {
    int subarrays = 1;
    long long currentSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (currentSum + nums[i] <= maxSum) {
            currentSum += nums[i];
        } else {
            subarrays++;
            currentSum = nums[i];
        }
    }
    return subarrays;
}

int splitArray(vector<int>& nums, int k) {
    if (k > nums.size()) return -1;
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    
    while (low <= high) {
        int mid = (low + high) / 2;
        int subarrays = countSubarrays(nums, mid);
        if (subarrays > k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
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
	cout<<"Enter the K :";
	cin>>m;
	
    cout<<splitArray(a,m);
    

    return 0;
}
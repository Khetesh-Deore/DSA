#include <bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> nums, int x) {
	int n = nums.size();
	int ans = n;
	int low = 0, mid;
	int high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (nums[mid] >= x) {
			ans = mid;
			// look for more small index on left
			high = mid - 1;
		} else {
			low = mid + 1; // look for right
		}
	}
	return ans;
}
int upperbound(vector<int> nums, int x) {
	int n = nums.size();
	int ans = n;
	int low = 0, mid;
	int high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (nums[mid] > x) {
			ans = mid;
			// look for more small index on left
			high = mid - 1;
		} else {
			low = mid + 1; // look for right
		}
	}
	return ans;
}
vector<int> searchRange(vector<int>& nums, int target) {
	int lb = lowerbound(nums, target);
	if (lb == nums.size() || nums[lb] != target)
		return {-1, -1};
	int up = upperbound(nums, target);
	return {lb, up - 1};
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
#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums)
{
	int n = nums.size();
	if (n == 1)
		return 0;
	if (nums[0] > nums[1])
		return 0;
	if (nums[n - 1] > nums[n - 2])
		return n - 1;
	int low = 1;
	int high = n - 2;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
			return mid;
		else if (nums[mid] > nums[mid - 1])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

int main()
{
	int n, k;
	cout << "Enter the number of elements A: ";
	cin >> n;
	vector<int> a(n);
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << f(a);

	return 0;
}
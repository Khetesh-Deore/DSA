#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums)
{
	int low = 0;
        int high = nums.size() - 1;
        int mn = INT_MAX;
		int index=-1;
        while (low <= high) {
            int mid = low + ((high - low) / 2);
            if (nums[low] <= nums[high]) {  //  whole array is sorted 
                if(nums[low]<mn){
					index=low;
					mn=nums[low];
				}
                break; // No need to search further
            }
            if (nums[low] <= nums[mid]) {  // left half array is sorted 
               if(nums[low]<mn){
				index=low;
				mn=nums[low];
			}
                low = mid + 1;
            } else {

                   // right half array is sorted
                high = mid - 1;
				if(nums[mid]<mn){
					index=mid;
					mn=nums[mid];
				}
            }
        }
        return index;
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
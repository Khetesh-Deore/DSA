#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums)
{
    int pre = 1, suff = 1;
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (pre == 0)
                pre = 1;
            if (suff == 0)
                suff = 1;
            pre *= nums[i];
            suff *= nums[nums.size() - i - 1];
            ans = max(ans, max(pre, suff));
        }
        return ans;

}

int main()
{
    int n;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
	
    cout<< f(a);
    

    return 0;
}
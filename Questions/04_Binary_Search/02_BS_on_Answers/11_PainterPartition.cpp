
#include <bits/stdc++.h>
using namespace std;
int countPainters(vector<int>& boards, int maxTime) {
    int painters = 1;
    long long currentTime = 0;
    for (int i = 0; i < boards.size(); i++) {
        if (currentTime + boards[i] <= maxTime) {
            currentTime += boards[i];
        } else {
            painters++;
            currentTime = boards[i];
        }
    }
    return painters;
}

int minTimeToPaint(vector<int>& boards, int k) {
    if (k > boards.size()) return -1;
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    while (low <= high) {
        int mid = (low + high) / 2;
        int requiredPainters = countPainters(boards, mid);
        if (requiredPainters > k) {
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
	
    cout<<minTimeToPaint(a,m);
    

    return 0;
}
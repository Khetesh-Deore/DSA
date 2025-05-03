
#include <bits/stdc++.h>
using namespace std;
int countStudents(vector<int>&arr,int pages)
{
	int students=1;
	long long pageStudent=0;
	for(int i=0; i<arr.size();i++){
		if(pageStudent+arr[i]<=pages)pageStudent+=arr[i];
		else{
			students+=1;
			pageStudent=arr[i];
		}
	}
	return students;

}
int findPages(vector<int>&arr,int n,int m){
	if(m>n)return -1;
	int low=*max_element(arr.begin(),arr.end());
	int high=accumulate(arr.begin(),arr.end(),0);
	while(low<=high){
		int mid=(low+high)/2;
		int students=countStudents(arr,mid);
		if(students>m)low=mid+1;
		else high=mid-1;
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
	cout<<"Enter the no. of students :";
	cin>>m;
	
    cout<<findPages(a,n,m);
    

    return 0;
}
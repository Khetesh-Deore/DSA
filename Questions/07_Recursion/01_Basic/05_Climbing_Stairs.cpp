#include<bits/stdc++.h>
using namespace std;
 int climbStairs(int n) {
        // base case
        if(n<0)return 0;
        if(n==0)return 1;
        return climbStairs(n-1)+climbStairs(n-2);// recurrence relation
    }

int main(){
	int n;
	cout<<"Enter N:";
	cin>>n;
	cout<<climbStairs(n);
	return 0;
}
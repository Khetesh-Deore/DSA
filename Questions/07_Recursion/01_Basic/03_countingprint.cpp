#include<bits/stdc++.h>
using namespace std;
void print(int n){
	// Base Case 
	if(n==0)return ;
    
    print(n-1);
	cout<<n<<" ";
  
}

int main(){
	int n;
	cout<<"Enter N:";
	cin>>n;
	print(n);
	return 0;
}
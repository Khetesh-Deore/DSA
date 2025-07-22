#include<bits/stdc++.h>
using namespace std;
bool palindrome(int i,int j,string s){
	if(i>j)return true;
	if(s[i]!=s[j])return false;
	i++,j--;
	return palindrome(i,j,s);
}

int main(){
	string s;
	cout<<"Enter The String:";
	cin>>s;
	cout<<"Palindrome is:"<<palindrome(0,s.length()-1,s);
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
string reverse(int i,int j,string s){
	if(i>j)return s;
	swap(s[i],s[j]);
	i++,j--;
	return reverse(i,j,s);
}

int main(){
	string s;
	cout<<"Enter The String:";
	cin>>s;
	cout<<"Reverse string is:"<<reverse(0,s.length()-1,s);
	return 0;
}
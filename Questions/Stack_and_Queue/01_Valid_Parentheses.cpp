#include<bits/stdc++.h>
using namespace std;


bool isValid(string s) {
	stack<char>st;
	for(char ch : s){
		if(ch=='(' || ch=='{' ||ch=='[')st.push(ch);
		else {
			 if (st.empty()) return false; 
			char c=st.top();
			st.pop();
			if((ch==')' && c=='(')||(ch=='}' && c=='{')||(ch==']' && c=='[')){

			}
			else return false;
		}
	}
	return st.empty();
}
int main(){
	string s;
	cout<<"Enter the string for Valid Parenthess:";
	cin>>s;
	cout<<"String Is :"<<isValid(s);

}
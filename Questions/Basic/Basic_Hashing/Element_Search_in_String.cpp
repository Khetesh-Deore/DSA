#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
    cout<<"Enter the String : ";
    cin>>s;
   
    //precomputation
    int hash[26]={0};
    for( int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the how many elements occurance you want to access : ";
    cin>>q;
    cout<<"Enter the element :";
    while(q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the N : "<<endl;
    cin>>n;
    cout<<"Enter the Array Element: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    //precomputation
   map<int,int>mpp;
    for( int i=0;i<n;i++)
    {
        mpp[arr[i]]+=1;
    }
    int q;
    cout<<"Enter the how many elements occurance you want to access : ";
    cin>>q;
    cout<<"Enter the element :";
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
}
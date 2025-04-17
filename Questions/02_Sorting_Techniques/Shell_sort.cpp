#include<bits/stdc++.h>
using namespace std;
vector<int>shell(vector<int>arr, int n)
{ 	int i=0;
	int gap= n/2;
	while(gap>=1)
	{
	  int swapped =1;
	  while(swapped==1)
	  {
	    swapped=0;
	    for(int i=0;i<n-gap;i++)
	    {
	      if(arr[i]>arr[i+gap])
	      {
	         swap(arr[i],arr[i+gap]);
	         swapped=1;
	      }
	    }
	  }
	  cout<<"At Gap "<<gap<<"\n";
	  cout<<"[";
	   for(int i= 0;i<n;i++)
	    {
	     cout<<arr[i]<<" ";
	    }
	    cout<<"]\n";
	  gap=gap/2;
	}
	return arr;
}


int main()
{
    int n;
    cout<<"Enter the No. of element in Array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i= 0;i<n;i++)
    {
     cin>>arr[i];
    }
    
    vector<int>display=shell(arr,n) ;
    cout<<"Sorted Array :\n";
    cout<<"[";
     for(int i= 0;i<n;i++)
    {
     cout<<display[i]<<" ";
    }
    cout<<"]";
}

#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &arr, int n)
{
    int sum=0,start,ansstart=0,ansend=0;
     long long maxi=LONG_MIN;
     for(int i=0;i<n;i++)
     {  if(sum==0)start=i;
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
            ansstart=start,ansend=i;
                    }
        if(sum<0)
        {
            sum=0;
        }
     }
     return maxi;
}

int main()
{
    int n;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
cout<< f(a, n);
    

    return 0;
}
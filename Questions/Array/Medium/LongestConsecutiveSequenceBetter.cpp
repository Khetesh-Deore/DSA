#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &a, int n)
{
    sort(a.begin(),a.end());
    int LastSmaller=INT_MIN;
    int count =0;
    int longest =1;
    for(int i=0;i<n;i++)
    {
        if(a[i]-1==LastSmaller)
        {
            count+=1;
            LastSmaller=a[i];
        }
        else if( LastSmaller!=a[i])
        {
            count=1;
            LastSmaller=a[i];
        }
        longest=max(longest,count);
    }
    return longest;
    
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
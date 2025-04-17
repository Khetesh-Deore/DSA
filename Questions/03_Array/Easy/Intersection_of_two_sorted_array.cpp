#include <bits/stdc++.h>
using namespace std;
vector <int> f(vector<int> &a,vector<int> &b )
{
    int n1=a.size();
    int n2=b.size();
    vector<int>ans;
    int i=0;
    int j=0;

    while(i<n1 &&  j<n2)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<a[i])
        {
       j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    
    

    return ans;
}

int main()
{
    int n1, n2;
    cout << "Enter the number of elements A1: ";
    cin >> n1;
     vector<int> a(n1);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    cout << "Enter the number of elements A2: ";
    cin >> n2;

    vector<int> b(n2);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    vector<int> final = f(a,b);
    for (int num : final)
    {
        cout << num << " ";
    }

    return 0;
}
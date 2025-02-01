#include <bits/stdc++.h>
using namespace std;
vector <int> f(vector<int> &a,vector<int> &b )
{
    int n1=a.size();
    int n2=b.size();
    set<int>st;
    for(int i=0; i<n1;i++)
    {
        st.insert(a[i]);

    }
    for(int i=0; i<n2;i++)
    {
        st.insert(b[i]);
        
    }
    vector<int> temp;
    for(auto it : st)
    {
        temp.push_back(it);
    }
    

    return temp;
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
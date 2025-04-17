//moore's voting algorithm
#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &arr, int n)
{
    int cnt=0;
    int el;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el =arr[i];

        }
        else if(arr[i]==el)
        {
            cnt++;
        }
        else{
            cnt--;
        }
        

    }

    return el;
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
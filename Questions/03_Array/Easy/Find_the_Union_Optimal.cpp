#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {

            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
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

    vector<int> final = f(a, b);
    for (int num : final)
    {
        cout << num << " ";
    }

    return 0;
}
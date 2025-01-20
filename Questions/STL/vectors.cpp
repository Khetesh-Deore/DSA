#include<bits/stdc++.h>
using namespace std;
void vectors()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    // Accessing elements of the vector

    cout<<"Using index : "<<v[0]<<" "<<v[1]<<endl;

    cout<<"Using at()function : "<<v.at(0)<<" "<<v.at(1)<<endl;

    cout<<"Using range based for loop:"<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Using iterator :"<<endl;
    for(auto it=v.begin() ;it!=v.end();++it)
    {
        cout<<*it<<" ";
    }
}
int main()
{  
    vectors();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void pair_explain()
{
    pair<int, int>p={1,3};
    cout<<"1 element : "<<p.first<<"\n2 element : "<<p.second<<endl;

    pair<int,pair<int ,int >>pa ={2,{4,5}};
    cout<<pa.first<<" "<<pa.second.first<<" "<<pa.second.second<<endl;

    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].second<<endl;


}
int main()
{   pair_explain();
    return 0;
}
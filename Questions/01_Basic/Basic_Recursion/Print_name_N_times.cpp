/* O(N) ->TC
   O(N) -> Stack space(space complexity)*/
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{   if(i>n)
    return ;
    cout<<"Khetesh"<<i<<endl;
    f(i+1,n);

}
int main()
{
    int n;
    cout<<"Enter the N: ";
    cin>>n;
    f(1,n);
    return 0;
}
/* */
#include<bits/stdc++.h>
using namespace std;
void f( int i , int n)
{   if(i<1)
    return ;
    f(i-1,n);
    cout<<i<<" ";
    

}
int main()
{
    int n;
    cout<<"Enter the N: ";
    cin>>n;
    f(n,n);
    return 0;
}
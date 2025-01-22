/* */
#include<bits/stdc++.h>
using namespace std;
void f(int n, int sum)
{   if(n<0)
{
    cout<<"Sum : "<<sum<<endl;
    return;
}
    
    
    f(n-1,sum+n);

}
int main()
{
    int n;
    cout<<"Enter the N: ";
    cin>>n;
    f(n,0);
    return 0;
}
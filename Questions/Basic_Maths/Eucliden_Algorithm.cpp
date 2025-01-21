/*
time compexity log fi (min(a,b))
*/
#include <bits/stdc++.h>
using namespace std;

int  gcd(int a,int b)
{ 
    while(a>0  && b>0)
    {
        if(a>b)
        a=a%b;
        else
        b=b%a;
    }
    if(a==0)
    cout<<b;
    else 
    cout<<a;
    
}
int main()
{
    int n,m;
    cout << "Enter the Digits. : ";
    cin >> n>>m;
   gcd(n,m);
 return 0;
}

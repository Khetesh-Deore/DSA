/*

*/
#include <bits/stdc++.h>
using namespace std;

int  question(int n,int m)
{ int gcd =1;
  for(int i=1;i<=min(n,m);i++){
  if(n%i==0 && m%i==0)
  gcd =i;
  }
  return gcd;
    
}
int main()
{
    int n,m;
    cout << "Enter the Digits. : ";
    cin >> n>>m;
    int gcd =question(n,m);
    cout<<gcd;
    

    return 0;
}

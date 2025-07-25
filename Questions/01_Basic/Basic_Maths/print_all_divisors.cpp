/*
Problem statement
Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.



For example:
'N' = 5.
The divisors of 5 are 1, 5.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
10
Sample Output 1 :
1 2 5 10
Explanation of Sample Input 1:
The divisors of 10 are 1,2,5,10.
Sample Input 2 :
6
Sample Output 2 :
1 2 3 6
Explanation of Sample Input 2:
The divisors of 6 are 1, 2, 3, and 6.
Constraints :
1 <= 'N' <= 10^5 

*/
#include <bits/stdc++.h>
using namespace std;

int question(int n)
{
    vector<int>ls;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if((n/i)!=i)
            ls.push_back(n/i);
            

        }
    }
   sort(ls.begin(),ls.end());

    for(auto it :ls)
    cout<<it<<" ";
   
}
int main()
{
    int n;
    cout << "Enter the Digit. : ";
    cin >> n;
     question(n);
 
    return 0;
}

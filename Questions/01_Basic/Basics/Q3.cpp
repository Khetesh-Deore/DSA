/*
Take the age from the user and then decide according
1.If age < 18,
  print-> not eligible for job
2.If age >=18'
  print-> eligible for job
3.If age>=55 and age <=57
  print -> eligible for jon retirement soon.
4.If age >57 
  print -> retirement time   
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int age;
    cout<<"Enter the age :";
    cin>>age;
    if (age<18)
    cout<<"Not eligible for job";
    else if(age >57)
    cout<<"retirement time";
    else if (age>=55 && age<=57)
    cout<<"Eligible for job, but retirement soon";
    else if (age>=18)
    cout<<"Eligible for job";
    
    
    return 0;
}
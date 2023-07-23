#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
 int n,i;
 double a[100000],eql,sum=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
    sum+=a[i];
 }
 cout<<showpoint;
 cout<<setprecision(14);
 eql = sum/n;

 cout<<eql<<endl;
 return 0;
 }




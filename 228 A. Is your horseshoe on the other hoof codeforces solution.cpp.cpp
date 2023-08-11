#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4,a[100],i,count=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort (a,a+n);

    for(i=0;i<n;i++)
    {
       if(a[i]==a[i+1])
        count++;
    }
    cout<<count;

}


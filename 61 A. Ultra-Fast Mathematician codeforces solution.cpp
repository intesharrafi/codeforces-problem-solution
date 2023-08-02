#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1,s2,s3;
    int i,len1,len2;
    cin>>s1>>s2;
    len1  = s1.length();
    len2 = s2.length();
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(s1[i]==s2[i])
            {
                s1[i]='0';
            }
            else
            {
                s1[i]='1';
            }
        }
    }
    cout<<s1<<endl;
    return 0;
}

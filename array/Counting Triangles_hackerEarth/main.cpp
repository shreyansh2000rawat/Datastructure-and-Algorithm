#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    string s[n];
    long long int c = 0;
    for( long long int i=0;i<n;i++)
    {
        cin>>s[i];
        sort(s[i].begin(), s[i].end());
    }
    sort(s, s + n);
    for(long long int i=0;i<n;i++)
    {
        if(i==0 && s[i]!=s[i+1])
        {
            c++;
        }
        if(i==n-1 && s[i]!=s[i-1])
        {
            c++;
        }
        if(i>0 && i<n-1 && s[i]!=s[i+1] && s[i]!=s[i-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}

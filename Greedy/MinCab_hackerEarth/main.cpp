#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX=1440;
int main()
{
    int n;
    cin>>n;
    vector<int>v(MAX,0);
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        b=b+(a*60);
        d=d+(c*60);
        for(int j=b;j<=d;j++)
        {
            v[j]+=1;
        }
    }
    int res=0;
    for(int i=0;i<MAX;i++)
    {
        res=max(res,v[i]);
    }
    cout<<res;
}

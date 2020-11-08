#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int res = 0;
    vector <int> p;
    vector <int> t;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]=='P')
        {
            p.push_back(i);
        }
        else
        {
            t.push_back(i);
        }
    }
    int l = 0, r = 0;
    while (l < t.size() && r < p.size())
    {
        if(abs(t[l]-p[r])<=k)
        {
            res = res + 1;
            l=l+1;
            r=r+1;
        }
        else if(t[l]<p[r])
        {
            l=l+1;
        }
        else
        {
            r=r+1;
        }
    }
    cout<<res<<endl;
    return 0;
}

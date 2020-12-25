#include <iostream>

using namespace std;

int main()
{
     string x;
    string y;
    cin>>x>>y;
    int m = x.length();
    int n = y.length();
    int t[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                t[i][j] = 0;
            }
            else if(x[i-1] == y[j-1])
            {
                t[i][j] = t[i-1][j-1] + 1;
            }
            else
            {
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    int index = t[m][n];
    int p = m;
    int q = n;
    string s = "";
    while(p>0 && q>0)
    {
        if(x[p-1]==y[q-1])
        {
            s.push_back(x[p-1]);
            {
                p--;
                q--;
            }
        }
        else
        {
            if(t[p][q-1]>t[p-1][q])
            {
                s.push_back(y[q-1]);
                q--;
            }
            else if(t[p-1][q]>t[p][q-1])
            {
                s.push_back(x[p-1]);
                p--;
            }
        }
    }
    while(p>0)
    {
        s.push_back(x[p-1]);
        p--;
    }
    while(q>0)
    {
        s.push_back(y[q-1]);
        q--;
    }
    cout<<s<<endl;
    return 0;
}

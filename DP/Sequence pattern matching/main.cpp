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
    if(t[m][n]==x.length())
    {
        cout<<true<<endl;
    }
    else
    {
        cout<<false<<endl;
    }
    return 0;
}

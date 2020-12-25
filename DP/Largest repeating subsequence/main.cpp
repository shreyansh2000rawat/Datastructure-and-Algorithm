#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    string y = x;
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
            else if(x[i-1] == y[j-1] && i!=j)
            {
                t[i][j] = t[i-1][j-1] + 1;
            }
            else
            {
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    cout<<t[m][n]<<endl;
    return 0;
}

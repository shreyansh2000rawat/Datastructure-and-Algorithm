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
    int del = 0;
    int ins = 0;
    del = x.length()-t[m][n];
    ins = y.length()-t[m][n];
    cout<<"deletion is : "<<del<<" and insertion is : "<<ins<<endl;
    return 0;
}

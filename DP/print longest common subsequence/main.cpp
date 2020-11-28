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
    int index;
    index = t[m][n];
    char lcs[index+1];
    lcs[index] = '\0';
    int p=m,q=n;
    while(p>0 && q>0)
    {
        if(x[p-1] == y[q-1])
        {
            lcs[index-1] = x[p-1];
            p=p-1;
            q=q-1;
            index = index -1;
        }
        else if(t[p-1][q]>t[p][q-1])
        {
            p=p-1;
        }
        else
        {
            q=q-1;
        }
    }
    cout<<lcs<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    int cn[n];
    for(int i=0;i<n;i++)
    {
        cin>>cn[i];
    }
    int t[n+1][s+1];
    for(int i=0;i<=n;i++)
    {
        t[i][0] = 1;
    }
    for(int j=0;j<=s;j++)
    {
        t[0][j] = 0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(cn[i-1]<=j)
            {
                t[i][j] = t[i-1][j] + t[i][j-cn[i-1]];
            }
            else
            {
                t[i][j] = t[i-1][j];
            }
        }
    }
    cout<<t[n][s]<<endl;
    return 0;
}

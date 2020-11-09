#include <iostream>

using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool t[n+1][s+1];
    for(int j=0;j<=s;j++)
    {
        t[0][j] = false;
    }
    for(int i=0;i<=n;i++)
    {
        t[i][0] = true;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
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

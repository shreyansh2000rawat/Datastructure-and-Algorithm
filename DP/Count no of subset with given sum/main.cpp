#include <iostream>

using namespace std;

int main()
{
    int n;
    int s;
    cin>>n;
    cin>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t[n+1][s+1];
    for(int i=0;i<=s;i++)
    {
        t[0][i] = 0;
    }
    for(int i=0;i<=n;i++)
    {
        t[i][0] = 1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]];
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

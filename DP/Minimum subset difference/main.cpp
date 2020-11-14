#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int range = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        range = range + arr[i];
    }
    bool t[n+1][range+1];

    for(int i=0;i<=range;i++)
    {
        t[0][i] = false;
    }

    for(int i=0;i<=n;i++)
    {
        t[i][0] = true;
    }

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=range;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
            }
            else
            {
                t[i][j] = t[i-1][j];
            }
        }
    }

    int diff = 0;
    for(int j = range/2; j>=0; j--)
    {
        if(t[n][j] == true)
        {
            diff = range - 2*j;
            break;
        }
    }
    cout<<diff<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
    int n;
    cin>>n;
    int cnt = 0;
    int mcnt = 0;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j = 0;
    for(int i = j+1;i<n;i++)
    {
        if(arr[j]==arr[i])
        {
            cnt = cnt + 1;
        }
        if(i==n-1)
        {
        if(cnt>mcnt)
        {
            mcnt = cnt;
        }
        cnt = 0;
        j=j+1;
        i=j;
        if(j==n)
        {
            break;
        }
        }
    }
    cout<<mcnt+1<<endl;
    t--;
    }
    return 0;
}

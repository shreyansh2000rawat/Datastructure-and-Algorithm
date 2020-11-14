#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    if(n%2==0)
    {
        m=n/2-1;
    }
    else{
        m=n/2;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=m;i++)
    {
        if(arr[n-1-i]==arr[i])
        {
            cout<<arr[i];
        }
        else{
         cout<<arr[n-1-i]<<" "<<arr[i]<<" ";
        }

    }
    return 0;
}

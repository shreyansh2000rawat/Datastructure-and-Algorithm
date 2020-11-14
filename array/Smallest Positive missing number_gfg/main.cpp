#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            if(arr[i+1]!=arr[i]+1)
            {
                cout<<arr[i]+1<<endl;
                break;
            }
        }
        if(i==n-1)
        {
            cout<<arr[n-1]+1<<endl;
        }
    }
    return 0;
}

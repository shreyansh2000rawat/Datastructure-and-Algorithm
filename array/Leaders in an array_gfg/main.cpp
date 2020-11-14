#include <iostream>

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
    int mx = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=mx)
        {
            cout<<arr[i]<<" ";
            mx = arr[i];
        }
    }
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int cnt = 1;
    long long int l;
    cin>>l;
    long long int k=l;
    if(k==1)
    {
        cout<<arr[0]<<endl;
    }
    else{
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cnt=cnt+1;
        }
        if(cnt==k)
        {
            cout<<arr[i]<<endl;
            break;
        }
        if(arr[i]!=arr[i+1])
        {
            cnt=1;
        }
    }
    }
    return 0;
}

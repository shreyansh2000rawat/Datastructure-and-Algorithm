#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
    }
    sort(arr,arr+n);
    sort(brr,brr+n);
    int s = 0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i]*brr[n-i-1];
    }
    cout<<s<<endl;
    return 0;
}

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
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    int x = 0;
    sort(brr,brr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=brr[i] && arr[n-i-1]==brr[n-i-1] || arr[i]==brr[i] && arr[n-i-1]!=brr[n-i-1])
        {
            cout<<"No"<<endl;
            x=1;
            break;
        }
    }
    if(x==0)
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}

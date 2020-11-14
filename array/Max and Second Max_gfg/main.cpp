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
    int m=arr[0];
    int sm=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>sm && arr[i]<m)
        {
            sm=arr[i];
        }
        if(arr[i]>sm && arr[i]>m)
        {
            sm=m;
            m=arr[i];
        }
    }
    cout<<m<<" "<<sm<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
    long long int n;
    cin>>n;
    long long int c=0;
    for(long long int i=1;i<=n;i++)
    {
        c=c+i;
    }
    long long int arr[n-1];
    for(long long int i=0;i<n-1;i++)
    {
       cin>>arr[i];
       c=c-arr[i];
    }
    cout<<c<<endl;
    t--;
    }
    return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int brr[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
    }
    long long int j = 0;
    long long int sum = 0;
    for(long long int i=j+1;i<n;i++)
    {
        sum = sum + abs(arr[j]-arr[i])+abs(brr[j]-brr[i]);
        if(j==n-2 && i==n-1)
        {
            break;
        }
        if(i==n-1)
        {
            j=j+1;
            i=j;
        }

    }
    cout<<sum<<endl;

    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int m=0;
    int z=0;
    if(n%2==0)
    {
        m = n/2;
        z = n/2;
    }
    else
    {
        m = n/2 + 1;
        z = n/2;
    }
    int brr[m];
    int crr[z];
    int j = 1;
    int k = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    brr[0] = arr[0];

    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            brr[j]=arr[i];
            j=j+1;
        }
        else
        {
            crr[k]=arr[i];
            k=k+1;
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<brr[i]<<endl;
    }
    for(int i=0;i<z;i++)
    {
        cout<<crr[i]<<endl;
    }


    return 0;
}

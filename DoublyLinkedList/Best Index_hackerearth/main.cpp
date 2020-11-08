#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int brr[n];
    long long int k=0;
    long long int j=2;
    long long int l=1;
    long long int z=1;
    long long int sum=0;
    long long int msum=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
        k=n-l;
        while(k>0)
        {
            k=k-j;
            if(k>0)
            {
                z=z+j;
                j=j+1;
            }
            if(k==0)
            {
                z=z+j;
                break;
            }
        }
        brr[i]=z+l-1;
        l=l+1;
        j=2;
        z=1;

    }
    l=0;
    while(l<n)
    {
        for(long long int i=l;i<brr[l];i++)
        {
            sum=sum+arr[i];
        }

        if(msum<sum)
        {
            msum=sum;
        }
        l=l+1;
        sum=0;
    }
    cout<<msum<<endl;

    return 0;
}

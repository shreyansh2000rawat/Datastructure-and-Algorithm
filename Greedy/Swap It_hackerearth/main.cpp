#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int n,k;
        cin>>n>>k;
        long long int arr[n];
        long long int brr[n];
        long long int crr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(long long int i=0;i<n;i++)
        {
            brr[i]=arr[i];
        }
        sort(brr,brr+n);
        long long int l=0;
        long long int c=0;
        while(l<n)
        {

            for(long long int i=0;i<n;i++)
            {
                if(arr[i]==brr[l])
                {
                    if(k>=i)
                    {
                        k=k-i;
                        crr[c]=brr[l];
                        arr[i]=0;
                        brr[l]=;
                        c=c+1;
                        l=0;
                        break;
                    }
                    else
                    {
                    l=l+1;
                    }
                }
            }
            if(k==0)
                    {
                        break;
                    }
        }
        for(long long int i=0;i<c;i++)
        {
            cout<<crr[i]<<" ";
        }
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]==0)
                continue;
            else{
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}

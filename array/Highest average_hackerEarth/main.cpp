#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int t = 0;
    cin>>t;
    while(t>0)
    {
        long long int k;
        long long int quan = 0;
        long long int maxquan = 0;
        long long int sum = 0;
        cin>>k;
        if (k<=arr[0])
        {
            cout<<0<<endl;
        }
        else{
            for(long long int i=0;i<n;i++)
            {
                sum = sum + arr[i];
                if((sum/(i+1))<k)
                {
                    quan = i + 1;
                }
            }
            cout<<quan<<endl;
        }

        t=t-1;
    }
    return 0;
}

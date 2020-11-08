#include <iostream>

using namespace std;

int binarysearch(long long low,long long arr[],long long high,long long key)
{
    long long z = high + 1;
     while(low<=high)
   {
     int mid=(low+high)/2;
     if(arr[mid]<key && key<=high+1)
     {
         low=mid+1;
     }
     else if(arr[mid]>key)
     {
         high=mid-1;
     }
     else if(key>high+1)
     {
        cout<<z<<" "<<(z*(z+1))/2<<endl;
        break;
     }
     else
     {
         cout<<key<<" "<<(key*(key+1))/2<<endl;
         break;
     }
   }
   return -1;
}

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    long long t;
    long long k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>t;
    while(t>0){
    cin>>k;
    binarysearch(0,arr,n-1,k);
    t--;
    }
    return 0;
}

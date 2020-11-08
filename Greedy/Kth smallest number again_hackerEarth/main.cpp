#include <iostream>

using namespace std;

int binarySearch(int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(mid<key)
     {
         low=mid+1;
     }
     else if(mid>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }

int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
    long long int n;
    long long int q;
    cin>>n;
    cin>>q;
    while(n>0)
    {
    long long int a;
    long long int b;
    cin>>a>>b;
    long long int s = b-a+1;
    long long int arr[s];
    long long int x = a;
    for(int i = 0; i<s; i++)
    {
        arr[i]=x;
        x = x+1;
    }
    while(q>0)
    {
    long long int k;
    cin>>k;
    if(k>s)
    {
        cout<<-1<<endl;
    }
    else{
     cout<<arr[binarySearch(0,s-1,k-1)]<<endl;
    }
    q--;
    }
    n--;
    }
    t--;
    }
    return 0;
}

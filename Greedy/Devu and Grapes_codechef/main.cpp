#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t>0)
    {
     long long int n;
     long long int k;
     long long int s=0;
     cin>>n>>k;
     long long int arr[n];
     for(long long int i=0;i<n;i++)
     {
         cin>>arr[i];
         if(arr[i]<k)
         {
             s=s+k-arr[i];
         }
         if(arr[i]>k)
         {
          if(arr[i]%k>(k/2))
          {
              s=s+(k-(arr[i]%k));
          }
          else
          {
              s=s+arr[i]%k;
          }
         }
     }
     cout<<s<<endl;
     t--;
    }
    return 0;
}

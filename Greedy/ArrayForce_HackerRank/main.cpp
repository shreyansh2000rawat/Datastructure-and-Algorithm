#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
     int a;
     int b;
     int n;
     int mod;
     cin>>a>>b>>n>>mod;
     int arr[n];
     int cn = 1;
     int sum = 0;
     arr[0] = a;
     arr[1] = b;
     for(int i = 2;i<n;i++)
     {
         arr[i] = (arr[i-1] + arr[i-2])%mod;
     }
     sort(arr,arr+n);
     for(int i = 0;i<n;i++)
     {
         if(arr[i]==arr[i+1])
         {
             cn = cn + 1;
         }
         else if(arr[i]!=arr[i+1])
         {
             sum = sum  + cn*cn;
             cn = 1;
         }
         else if(i==n-1 && arr[i]!=arr[i-1])
         {
             sum = sum + 1;
         }
     }
     cout<<sum<<endl;
    t--;
    }
    return 0;
}

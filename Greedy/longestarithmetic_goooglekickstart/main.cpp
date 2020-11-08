#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
     long long int n;
     cin>>n;
     long long int arr[n];
     for(long long int j=0;j<n;j++)
     {
         cin>>arr[j];
     }
     long long int c = 0;
     long long mc = 0;
     long long int d =0;
     long long int i=0;
     for(i=0;i<n;i++)
     {
         if(c==0)
         {
             d=arr[i]-arr[i+1];
             c=1;
             continue;
         }
         else if((arr[i]-arr[i+1])==d)
         {
             c=c+1;
         }
         else if(i+1==n)
         {
             if(mc<c+1)
             {
                 mc=c+1;
             }
             break;
         }
         else if((arr[i]-arr[i+1])!=d)
         {
             if(mc<c+1)
             {
                 mc=c+1;
             }
             c=1;
             d=arr[i]-arr[i+1];
         }
     }
     cout<<mc<<endl;
     t--;
    }
    return 0;
}

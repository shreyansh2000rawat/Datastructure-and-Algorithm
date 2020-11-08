#include <iostream>

using namespace std;

int main()
{
   long long int n;
   long long int d;
   long long int m;
   long long int cnt = 0;
   cin>>n;
   long long int arr[n];
   for(long long int i = 0;i<n;i++)
   {
       cin>>arr[i];
   }
   cin>>d>>m;
   long long int l = 0;
   long long int z = d;
   long long int j;

   for(j=0;j<m;j++)
   {
       z=z-arr[j+l];
       cout<<j<<endl;
       if(j==m-1)
       {
           if(z==0)
           {
              j=-1;
              cnt++;
           }
         j = -1;
         z = d;
         l = l+1;
         if(l>(n-2))
         {
             break;
         }
       }
   }
   cout<<cnt<<endl;

   return 0;
}

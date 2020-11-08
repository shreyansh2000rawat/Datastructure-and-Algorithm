#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   int brr[n];
   int i = 0;
   int j = n-1;
   int z = 0;
   int diff = 0;
   int maxm = 0;
   for(int k=0;k<n;k++)
   {
       cin>>arr[k];
   }
   for(int k=0;k<n;k++)
   {
       cin>>brr[k];
   }

   for(i = 0;i<n;i++)
    {
        if(i<=j && brr[j]>=arr[i])
        {
            diff = j-i;
            z = 1;
            maxm = max(maxm,diff);
        }
        if(i==n-1 && j>0)
        {
            j=j-1;
            i=0;
        }
    }
    cout<<maxm<<endl;

    return 0;
}

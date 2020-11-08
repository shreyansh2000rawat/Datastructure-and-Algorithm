#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
     int n;
     cin>>n;
     string x;
     string arr[n];
     int z = 0;
     int m=0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=0;i<n;i++){
        x = arr[i];
        if(x[0]>96 && x[0]<123)
        {
           m = i;
           break;
        }
        else if(i==n-1 && m==0){
            z=1;
        }

     }
     if(z==1){

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     }
     else{
     string brr[m];
     for(int i=0;i<m;i++)
     {
         brr[i]=arr[i];
     }
     string crr[n];
     for(int i=n-1;i>=m;i--)
     {
         crr[n-1-i]=arr[i];
     }
     for(int i=n-m;i<n;i++)
     {
         crr[i]=brr[i-m+1];
     }
     for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
     }
     }
     T=T-1;
    }
  return 0;
}

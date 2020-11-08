#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
     long long int m = 0;
     long long int r1 = 0;
     long long int r2 = 0;
     long long int r3 = 0;
     long long int arr[4];
     int rem = 0;

     for(long long int i = 0;i<4;i++)
     {
         cin>>arr[i];
     }
     m = arr[0];
     r1 = arr[1];
     r2 = arr[2];
     r3 = arr[3];

     if(m%4==0){
        cout<<0<<endl;
     }
     else
    {
     rem = m%4;
     if(rem == 1)
     {
         if(r1*3<(r2+r1) && r1*3<r3)
         {
             cout<<3*r1<<endl;
         }
         else if(r3<(r2+r1) && r1*3>r3)
         {
             cout<<r3<<endl;
         }
         else
        {
         cout<<(r1+r2)<<endl;
        }
     }
     else if(rem == 2)
     {
         if(r2<2*r1 && r2<2*r3)
         {
             cout<<r2<<endl;
         }
         else if(r2>2*r1 && 2*r3>2*r1)
         {
             cout<<r1*2<<endl;
         }
         else{
            cout<<r3*2<<endl;
         }
     }
     else
    {
      if(r1<r2+r3 && r1<3*r3)
      {
          cout<<r1<<endl;
      }
      else if(r1>r2+r3 && r2+r3<3*r3)
      {
          cout<<(r2+r3)<<endl;
      }
      else{
        cout<<3*r3<<endl;
      }
    }
    }
        t--;
    }
    return 0;
}

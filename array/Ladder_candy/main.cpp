#include <iostream>

using namespace std;

int main()
{
    int T,N,K;
    cin>>T;

   while(T>0)
  {
  cin>>N;
  cin>>K;
  int arr[N];
  int sum = 0;
  for(int i =0;i<N;i++)
  {cin>>arr[i];
   }
   for(int i =0;i<N;i++)
  {sum=sum+arr[i]/K;
   }
   cout<<sum<<endl;
   T=T-1;
   }
 return 0;
}

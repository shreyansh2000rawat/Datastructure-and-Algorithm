#include <iostream>

using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T>0)
    {
     int B[2];
     cin>>N;
     cin>>B[0];
     cin>>B[1];

     int l[N];
     for(int i=0;i<N;i++)
     {
         cin>>l[i];
     }
     if(l[0] == B[0] && l[N-1] == B[1])
     {
         cout<<"BOTH"<<endl;
     }
     else if(l[0]==B[0] && l[N-1]!=B[1])
     {
         cout<<"EASY"<<endl;
     }
     else if(l[0]!=B[0] && l[N-1]==B[1])
     {
         cout<<"HARD"<<endl;
     }
     else if(l[0]!=B[0] && l[N-1]!=B[1])
     {
         cout<<"OKAY"<<endl;
     }
     T = T-1;
    }

    return 0;
}

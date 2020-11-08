#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    char arr[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int a,b,c,d;
    long long int t = n-3;
    long long int j=0;
    long long int k=0;
    long long int z=0;
    long long int cnt=0;
    long long int finc=0;
    while(t>0)
    {
        a=j;
        for(long long int i=a+2;i<n;i++)
        {
            if(arr[i]==arr[a])
                {
                    k=i;
                    cnt = cnt +1;
                    break;
                }
        }
        z=k+1;
        b=a+1;
        for(long long int i=z;i<n;i++)
        {
            if(arr[b]==arr[i])
                {
                    cnt = cnt +1;
                    break;
                }
                if(i==n-1 && b<k)
                {
                    i=z;
                    b=b+1;
                }
        }
        if(cnt==2)
        {
            finc = finc+1;
        }
        j=j+1;
        cnt=0;
        t--;
    }
    cout<<finc<<endl;
    return 0;
}

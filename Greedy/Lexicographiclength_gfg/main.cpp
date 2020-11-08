#include <iostream>

using namespace std;

int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int ranks(char brr[],int in,int r,int sz)
{
    int c=0;
    if(in==sz-1)
    {
        return r+1;
    }
    else
    {
        for(int j=in+1;j<sz;j++)
    {
        if(brr[in]>brr[j])
        {
            c=c+1;
        }
    }
    r=r+c*factorial(sz-in-1);
    in=in+1;
    return ranks(brr,in,r,sz);
    }
}

int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s = 0;
    int i=0;
    cout<<ranks(arr,i,s,n)<<endl;
    return 0;
}

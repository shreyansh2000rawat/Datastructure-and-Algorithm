#include <iostream>

using namespace std;

int josephus(int n,int m)
{
    if(m>=n)
    {
        return 0;
    }
    if(m==0)
    {
        return n+1;
    }
    return josephus(n-1,m-1);
}

int main()
{
    int x,k;
    cin>>x>>k;
    cout<<josephus(x,k-1)<<endl;
    return 0;
}

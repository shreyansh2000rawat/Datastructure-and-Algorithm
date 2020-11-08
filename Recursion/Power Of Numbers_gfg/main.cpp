#include <iostream>

using namespace std;

long long int powerOfNum(long long int x,long long int pow,long long int nu)
{
    if(pow==0)
    {
        return nu;
    }
    nu=nu*x;
    pow=pow-1;
    return powerOfNum(x,pow,nu);
}

int main()
{
    long long int n,rx;
    cin>>n;
    rx = n;
    long long int r_n = 0;
    while(rx > 0)
    {
        r_n = r_n*10 + rx%10;
        rx = rx/10;
    }
    cout<<powerOfNum(n,r_n,1)<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int powerOfNum(int x, int pow,int nu)
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
    int n,p;
    cin>>n>>p;
    cout<<powerOfNum(n,p,1)<<endl;
    return 0;
}

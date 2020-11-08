#include <iostream>

using namespace std;

int sumofdigit(int n,int s)
{
    if(n==0)
    {
        if(s/10==0)
        {
         return s;
        }
        else
        {
         n=s;
         s=0;
         return sumofdigit(n,s);
        }
    }
    s=s+n%10;
    return (sumofdigit(n/10,s));
}

int main()
{
    int x;
    cin>>x;
    cout<<sumofdigit(x,0)<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int sumofdigit(int n,int c)
{
    if(n==0)
    {
        return c;
    }
    c=c+1;
    return sumofdigit(n/10,c);
}

int main()
{
    int x;
    cin>>x;
    cout<<sumofdigit(x,0)<<endl;
    return 0;
}

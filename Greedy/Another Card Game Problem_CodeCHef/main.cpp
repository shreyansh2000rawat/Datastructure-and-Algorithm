#include <iostream>

using namespace std;

int number(long long int n)
{
    long long int z = n, counter = 0;
    if(z<10)
    {
        return 1;
    }
    else
    {
        counter = z/9;
        if(z%9!=0)
        {
            counter++;
        }
        return counter;
    }
}

int main()
{
    long long int t,c,r,d1,d2;
    cin>>t;
    while(t>0)
    {
    cin>>c>>r;
    d1 = number(c);
    d2 = number(r);
    if(d1<d2)
        cout<<0<<" "<<d1<<endl;
    else if(d1>=d2)
        cout<<1<<" "<<d2<<endl;
    t--;
    }
    return 0;
}

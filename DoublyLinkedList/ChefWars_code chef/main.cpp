#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
    long long int h;
    long long int p;
    cin>>h>>p;
    if(p>h/2)
    {
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    t--;
    }
    return 0;
}

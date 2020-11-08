#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int cf = 0;
    int cs = 0;
    while(n>0){
    if(n%4==0 && n%7!=0)
    {
        n=n-4;
        cf = cf + 1;
    }
    else if(n%7==0 && n%4!=0)
    {
        n=n-7;
        cs = cs + 1;
    }
    else if(n%4==0 && n%7==0){
        cs = cs +1;
        n = n-7;
    }
    else{
        n=n-7;
        cs = cs + 1;
    }
    }
    if(n<0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for (int i = 0;i<cf;i++)
    {
        cout<<4;
    }
    for (int i = 0;i<cs;i++)
    {
        cout<<7;
    }
    return 0;
}

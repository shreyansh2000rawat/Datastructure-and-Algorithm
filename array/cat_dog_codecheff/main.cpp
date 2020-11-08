#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    int c = 0;
    int d = 0;
    int l = 0;
    cin>>c;
    cin>>d;
    cin>>l;
    if (c<d*2 && l%4 == 0 && l>=d*4 && l<=(c+d)*4)
        {
            cout<<"yes"<<endl;
        }
    else if (c>d && c>d*2 && l%4 == 0 && l>=((c-d*2)*4 + d*4) && l<=(c+d)*4)
        {
            cout<<"yes"<<endl;
        }
    else {
        cout<<"no"<<endl;
    }
    t=t-1;
    }
    return 0;
}

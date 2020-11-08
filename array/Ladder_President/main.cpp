#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
     int c;
     int v;
     cin>>c;
     cin>>v;
     int b=0;
     int arr[v][c];
     for(int i=0;i<v;i++)
     {
        for(int j=0;j<c;j++)
            {cin>>arr[i][j];
     }
     cout<<endl;
    }
    int i;
    for(i=0;i<v;i++)
    {
        int counts=0;
        int a = arr[i][0];
        for(int j=0;j<v;j++)
        {
            if(arr[j][0]==a)
        {
            counts = counts +1;
        }

        }
        if(counts>v/2)
            {
                b=a;
                cout<<b<<" "<<1<<endl;
                counts = 0;
                break;
            }
        else if((i == v-1) && b==0)
        {
        i=0;
        int countss;
        int a = arr[i][1];
        for(int j=0;j<v;j++)
        {
            if(arr[j][1]==a)
        {
            countss = countss +1;
        }

        }
        if(countss>=v/2+1)
            {
                b=a;
                cout<<b<<" "<<2<<endl;
                countss = 0;
                break;
            }
        }
    }
    T=T-1;
    }
    return 0;
}

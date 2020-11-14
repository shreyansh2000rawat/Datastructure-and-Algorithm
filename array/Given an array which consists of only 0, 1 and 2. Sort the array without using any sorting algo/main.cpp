#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            c0 = c0+1;
        }
        if(arr[i]==1)
        {
            c1 = c1+1;
        }
        if(arr[i]==2)
        {
            c2 = c2+1;
        }
    }
    int j = 0;

    while(c0>0)
    {
        arr[j]=0;
        j=j+1;
        c0=c0-1;
    }
    while(c1>0)
    {
        arr[j]=1;
        j=j+1;
        c1=c1-1;
    }
    while(c2>0)
    {
        arr[j]=2;
        j=j+1;
        c2=c2-1;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}

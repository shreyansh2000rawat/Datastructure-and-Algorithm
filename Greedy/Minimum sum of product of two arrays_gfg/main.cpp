#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
    }
    cin>>k;
    int res=0;
    int pro=0;
    int temp = 0;
    int d =0;
    int fd =0;

    for(int i=0;i<n;i++)
    {
        pro = arr[i]*brr[i];
        res = res + pro;

        if(pro<0 && brr[i]<0)
        {
            temp = (arr[i]+2*k)*brr[i];
        }
        if(pro<0 && arr[i]<0)
        {
            temp = (arr[i]-2*k)*brr[i];
        }
        if(pro>0 && arr[i]<0)
        {
            temp = (arr[i]+2*k)*brr[i];
        }
        if(pro>0 && arr[i]>0)
        {
            temp = (arr[i]-2*k)*brr[i];
        }
        d=abs(temp-pro);
        if(d>fd)
        {
            fd = d;
        }
    }
    cout<<res-fd<<endl;
    return 0;
}

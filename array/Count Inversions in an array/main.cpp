#include <iostream>

using namespace std;

int invcount(int arr[],int i,int n,int m)
{
    if(i==n)
    {
            return 0;
    }
    if(m==i)
    {
        i=i+1;
        m=n+1;
        return invcount(arr,i,n,m-1);
    }
    else if(arr[m]<arr[i])
    {
        return 1+invcount(arr,i,n,m-1);
    }
    else
    {
        return invcount(arr,i,n,m-1);
    }

}

int main()
{
    int n;
    int i=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<invcount(arr,i,n-1,n-1)<<endl;
    return 0;
}

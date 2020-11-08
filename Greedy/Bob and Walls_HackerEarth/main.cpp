#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j = 0;
    int ct = 1;
    for(long long int i=1;i<n;i++)
    {
        if(arr[j]<arr[i])
        {
            j=i;
            ct = ct + 1;
        }
    }
    cout<<ct<<endl;
    t--;
    }
    return 0;
}

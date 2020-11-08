#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(k>0)
    {
        int mins = INT_MAX;
        int ind = -1;

        for(int i=0;i<n;i++)
        {
            if(arr[i]<mins)
            {
                ind = i;
                mins = arr[i];
            }
        }
        if(mins==0)
        {
            break;
        }
        else
        {
            arr[ind] = -arr[ind];
            k=k-1;
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    cout<<s<<endl;
    return 0;
}

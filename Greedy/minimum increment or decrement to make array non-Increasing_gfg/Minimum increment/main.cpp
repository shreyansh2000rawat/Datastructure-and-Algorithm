#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dif = 0;
    int s=0;
    int maxs = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxs)
        {
            dif = arr[i] - maxs;
            s = s + dif;
            dif =0;
            maxs = arr[i];
        }
        maxs = arr[i];
    }
    cout<<s<<endl;
    return 0;
}

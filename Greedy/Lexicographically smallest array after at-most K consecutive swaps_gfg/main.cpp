#include <iostream>
#include<bits/stdc++.h>

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
    for(int i=0;i<n-1;i++)
    {
        int pos = i;
        for(int j=i+1;j<n;j++)
    {
        if((j-i)>k)
        {
            break;
        }
        if (arr[j] < arr[pos])
                pos = j;
    }
    for (int j = pos; j>i; j--)
            swap(arr[j], arr[j-1]);

        k -=  pos-i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

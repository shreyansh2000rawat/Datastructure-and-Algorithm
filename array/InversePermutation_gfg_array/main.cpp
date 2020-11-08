#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int find(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i;
    }
    return -1;
}

int main()
{

    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++)
    {
        int k = find(arr,n,i+1);
        brr[i]=k+1;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<brr[i];
    }

    return 0;
}

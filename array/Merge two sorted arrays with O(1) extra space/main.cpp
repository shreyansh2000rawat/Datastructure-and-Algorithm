#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int m;
    int i = 0;
    int j = 0;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    int temp = 0;
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(int k=0;k<m;k++)
    {
        cin>>brr[k];
    }
 while(j<m)
    {
        if(arr[i]<=brr[j])
        {
            i = i+1;
            if(i==n)
            {
                i=0;
                j=j+1;
            }
        }
        if(brr[j]<arr[i])
        {
            temp = arr[i];
            arr[i] = brr[j];
            brr[j] = temp;
            i=i+1;
            j=0;
            if(i==n)
            {
                i=0;
                j=j+1;
            }
        }

    }
    sort(arr,arr+n);
    sort(brr,brr+m);
    for(int k = 0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    for(int k = 0;k<m;k++)
    {
        cout<<brr[k]<<" ";
    }
    return 0;
}

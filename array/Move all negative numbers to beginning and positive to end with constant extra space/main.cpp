#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ni = 0;
    int arr[n];
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            temp = arr[i];
            arr[i] = arr[ni];
            arr[ni] = temp;
            ni = i;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}

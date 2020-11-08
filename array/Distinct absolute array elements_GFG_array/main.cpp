#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c = 1;
    for(int i = 1;i<n;i++)
    {
        if(arr[i-1]*arr[i-1]!=arr[i]*arr[i])
        {
            c=c+1;
        }
    }
    cout<<c<<endl;
    return 0;
}

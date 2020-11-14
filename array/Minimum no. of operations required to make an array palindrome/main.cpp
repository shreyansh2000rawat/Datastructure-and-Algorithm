#include <iostream>

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
    int m = n/2;
    int s =0; int e = n-1;
    int op = 0;
    while(s < e)
    {
        if(arr[s] == arr [e])
        {
            s = s+1;
            e = e-1;
        }
        else if(arr[s]>arr[e])
        {
            e = e-1;
            arr[e] = arr[e] + arr[e+1];
            op = op + 1;
        }
        else
        {
            s = s+1;
            arr[s] = arr[s] + arr[s-1];
            op = op + 1;
        }
    }

    cout<<op<<endl;

    return 0;
}

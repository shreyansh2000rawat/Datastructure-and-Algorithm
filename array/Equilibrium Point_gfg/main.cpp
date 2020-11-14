#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }

    int l_sum = 0;
    for(int i=0;i<n;i++)
    {
        if(l_sum == sum-arr[i])
        {
            cout<<i+1<<endl;
            break;
        }
        else{
            l_sum = l_sum + arr[i];
            sum = sum - arr[i];
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxcur = 1;
    int finmax = 1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        finmax = arr[i]*finmax;
        if(finmax>maxcur)
        {
            maxcur = finmax;
        }
    }
    cout<<maxcur<<endl;
    return 0;
}

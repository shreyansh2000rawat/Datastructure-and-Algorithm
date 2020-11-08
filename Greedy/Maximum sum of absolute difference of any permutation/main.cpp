#include <iostream>
#include <vector>
#include <algorithm>

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
    sort(arr,arr+n);
    vector<int> finseq;
    for (int i = 0; i < n / 2; ++i) {
        finseq.push_back(arr[i]);
        finseq.push_back(arr[n - i - 1]);
    }
    if (n % 2 != 0)
        finseq.push_back(arr[n/2]);
    int maxs = 0;
    for(int i=0;i<n-1;++i)
    {
        maxs = maxs + abs(finseq[i]-finseq[i+1]);
    }
    maxs = maxs + abs(finseq[0]-finseq[n-1]);
    cout<<maxs<<endl;
    return 0;
}

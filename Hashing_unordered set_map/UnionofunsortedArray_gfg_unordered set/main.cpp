#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    int m;
    cin>>n>>m;
    int arr[n];
    int brr[m];
    unordered_set <int> a;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a.insert(arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
        a.insert(brr[i]);
    }
    cout<<a.size()<<endl;
    return 0;
}

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map <int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<mp[i]<<endl;
    }
    return 0;
}

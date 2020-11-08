#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int arr[n];
    cin>>sum;
    int ps = 0;
    int rs = 0;
    unordered_map <int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        ps =ps + arr[i];
        if(ps==sum)
        {
            rs = i+1;
        }
        if(m.find(ps)==m.end())
        {
            m.insert({ps,i});
        }
        if(m.find(ps-sum)!=m.end())
        {
            rs = max(rs,i-m[ps-sum]);
        }
    }
    cout<<rs<<endl;
    return 0;
}

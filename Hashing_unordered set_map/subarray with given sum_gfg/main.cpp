#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set <int>s;
    int n;
    cin>>n;
    int arr[n];
    int ps = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    cin>>sum;
    for(int i=0;i<n;i++)
    {
        ps =ps + arr[i];
        if(ps == sum)
        {
            cout<<"yes"<<endl;
            break;
        }
        if(s.find(ps-sum)!=s.end())
        {
            cout<<"yes"<<endl;
            break;
        }
        s.insert(ps);
    }
    return 0;
}

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    unordered_set <int>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       if(s.find(k-arr[i])!=s.end())
       {
           cout<<"yes"<<endl;
           break;
       }
       else{
        s.insert(arr[i]);
       }
    }
    return 0;
}

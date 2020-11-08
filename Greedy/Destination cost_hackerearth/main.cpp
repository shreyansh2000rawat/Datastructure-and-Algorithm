#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int s = 0;
    vector <long long int> ca,bu;
    long long int arr[n],brr[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
        ca.push_back(arr[i]);
    }
    for(long long int i=0;i<n;i++)
    {
        cin>>brr[i];
        bu.push_back(brr[i]);
    }

    int a=0;
    int b=0;
    bool ar = false;
    bool br = false;
    while(a<=n)
    {
        if((ca[a]<=bu[a]) && ar==false)
        {
            s = s + ca[a];
            ar=true;
            br=false;
            ca.erase(ca.begin()+a);
            bu.erase(bu.begin()+a);
            a=0;
            n=n-1;
        }
        else if((ca[a]>bu[b]) && br==false)
        {
            s = s + bu[b];
            br=true;
            ar=false;
            ca.erase(ca.begin()+a);
            bu.erase(bu.begin()+a);
            a=0;
            n=n-1;
        }
        else
        {
            a=a+1;
            if(a==n)
            {
                a=0;
                br=false;
                ar=false;
            }
        }
        if(n==0)
        {
            break;
        }
    }
    cout<<s<<endl;
    return 0;
}

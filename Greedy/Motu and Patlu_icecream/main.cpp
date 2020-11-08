#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        int m = 2;
        int p = 1;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int k = 0;
        long long int j = n-1;
        long long int ms = 0;
        long long int ps = 0;
        long long int tm = arr[k];;
        long long int tp = arr[j];;
        while(k<=j && k<n && j>=0)
        {
            tm=tm-m;
            tp=tp-p;
            if(tm==0)
            {
                k = k + 1;
                ms = ms +1;
                tm = arr[k];
                if(k==j){
                if(tp<arr[j])
                {
                    ps = ps +1;
                }
                else if(tm<arr[k])
                {
                    ms = ms +1;
                }
                 else if(tm=tp)
                {
                    ms = ms +1;
                }
                break;
            }
            }
            if(tp==0)
            {
                j = j - 1;
                ps = ps +1;
                tp = arr[j];
                if(k==j){
                if(tp<arr[j])
                {
                    ps = ps +1;
                }
                else if(tm<arr[k])
                {
                    ms = ms +1;
                }
                 else if(tm=tp)
                {
                    ms = ms +1;
                }
                break;
            }
            }
        }
        if(ms>ps){
                cout<<ms<<" "<<ps<<endl;
                cout<<"Motu"<<endl;
            }
            else if(ms<ps){
                cout<<ms<<" "<<ps<<endl;
                cout<<"Patlu"<<endl;
            }
            t--;
    }
    return 0;
}

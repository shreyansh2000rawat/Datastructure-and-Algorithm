#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    char a[n];
    char b[n];
    for(long long int i = 0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]<b[i])
            {
            long long int m = b[i]-a[i];
             if(m==13)
             {
              sum = sum + 1;
             }
             if(m<13)
             {
                 sum = sum + m;
             }
             if(m>13)
             {
                sum =sum + 1 + m%13;
             }
            }
            else if(a[i]>b[i])
            {
                long long int l = ('Z'-a[i])+(b[i] - 'A') + 1;
                if(l==13)
             {
              sum = sum + 1;
             }
             if(l<13)
             {
                 sum = sum + l;
             }
             if(l>13)
             {
                sum = sum + 1 + l%13;
             }
            }
        }

    }
    cout<<sum<<endl;
    return 0;
}

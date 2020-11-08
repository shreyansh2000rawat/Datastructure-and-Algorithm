#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int k;
    cin>>k;
    long long int i = 0;
    long long int l;
    long long int z;
    long long int mx=0;
    long long int cnt=0;
    long long int j = 0;
    while(i<=(s.length()-k))
    {
        z=l+k;
        for(l = i;l<z;l++)
        {
            if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u')
            {
                cnt = cnt + 1;
            }
            if(l==z-1)
            {
                if(mx<cnt)
                {
                    mx = cnt;
                    j=i;
                }
                i++;
                cnt = 0;
            }
        }
    }
    for(long long int f = j;f<(j+k);f++)
    {
        cout<<s[f];
    }
    return 0;
}

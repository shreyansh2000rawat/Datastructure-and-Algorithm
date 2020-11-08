#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        string s;
        cin>>s;
         char a;
        int counts = 0;
        int fincount = 0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==s[i])
                {
                    counts=counts+1;
                }
            }
            if(counts>fincount)
            {
             a = s[i];
             fincount =counts;
            }
            if(fincount == counts ){
                    if(a>s[i])
                        a=s[i];
                }
            counts = 0;
        }
        cout<<fincount<<"  "<<a<<endl;
        T=T-1;
    }
    return 0;
}

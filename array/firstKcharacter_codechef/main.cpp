#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int c = 0;
    int j = 0;
    string arr[k];
    int l = 0;
    for(int i = 0;i<s.length();i++)
    {
        if((s[j])==s[i])
        {
            c++;
        }
        if((i==s.length()-1 && c==1))
            {
                arr[l]=s[j];
                j=j+1;
                i=0;
                l=l+1;
                c=0;
            }
        if(c>1){
            c=0;
            j=j+1;
            i=0;
        }
        if(l>k-1)
        {
            break;
        }
    }
    for(int i = 0;i<k;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}

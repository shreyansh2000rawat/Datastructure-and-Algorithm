#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max_neg = 0;
    int min_pos = 0;
    int count_neg = 0;
    int count_zero = 0;
    int prod = 1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
     if (arr[i] == 0) {
            count_zero++;
            continue;
        }
     if(arr[i]<0)
     {
         count_neg++;
         max_neg=max(max_neg,arr[i]);
     }
     if(arr[i]>0)
     {
         min_pos=min(min_pos,arr[i]);
     }
     prod = prod * arr[i];
    }
    if(count_zero==n || count_neg == 0 && count_zero > 0)
    {
        cout<<0<<endl;
    }
    else if(count_neg==0 && count_zero == 0)
    {
        cout<<min_pos<<endl;
    }
    else if (!(count_neg & 1) && count_neg != 0) {

        // Otherwise result is product of
        // all non-zeros divided by maximum
        // valued negative.
        prod = prod / max_neg;
        cout<<prod<<endl;
    }
    else
    {
     cout<<prod<<endl;
    }
    return 0;
}

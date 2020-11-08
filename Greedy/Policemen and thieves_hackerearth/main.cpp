#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int ti;
    cin>>ti;
    while(ti>0)
    {
     long long int n;
     long long int k;
     cin>>n>>k;
     vector<int> t;
     vector<int> p;
     char arr[n*n];
     for(long long int i=0;i<n*n;i++)
     {
         cin>>arr[i];
         if (arr[i] == 'P')
         p.push_back(i);
         else if (arr[i] == 'T')
         t.push_back(i);
     }
     long long int caught = 0;
     long long int th=0;
     long long int po=0;
     long long int s=0;
     while (th <=s+n && po <=s+n) {

        if(t[th]>=s+n && s+n<=n*n && p[po]<s+n )
      {
          po=po+1;
          s=s+n;
          continue;
      }
      if(p[po]>=s+n && s+n<=n*n && t[th]<s+n)
      {
          th=th+1;
          s=s+n;
          continue;
      }
      if(p[po]>=s+n && s+n<=n*n && t[th]>=s+n)
      {
          s=s+n;
          continue;
      }
      if(s+n>n*n)
      {
          break;
      }
      if(th==t.size() || po==p.size())
      {
          break;
      }

      if (abs(t[th] - p[po]) <= k) {
         caught=caught+1;
         th=th+1;
         po=po+1;
      }
      else if (t[th] < p[po])
         th=th+1;
      else if (t[th] > p[po])
         po=po+1;
   }
   cout<<caught<<endl;
   ti=ti-1;
}

    return 0;
}

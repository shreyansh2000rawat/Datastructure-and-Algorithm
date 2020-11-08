#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n,i;

    cin>>n;

    long int s[n],c[n];

    for(i=0;i<n;i++)

    {

        cin>>s[i];

    }

    for(i=0;i<n;i++)

    {

        cin>>c[i];

    }

    sort(s,s+n);

    sort(c,c+n);

    long int sum=0;

    for(i=0;i<n;i++)

    {

        sum=sum+(s[i]*c[i]);

    }

    cout<<sum;

}

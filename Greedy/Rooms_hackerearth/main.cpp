#include <bits/stdc++.h>
using namespace std;

inline int getn(){
register int n=0, c=getchar_unlocked();
while(c < '0' || c > '9') c = getchar_unlocked();
while(c >= '0' && c <= '9')
n = (n<<3) + (n<<1) + c - '0', c = getchar_unlocked();
return n;
}

int main()
{
	long long t,i,k,l,n,flag,count,x,p,q;
	//cin>>t;
	t=getn();
	while(t--)
	{
		//cin>>n;
		n=getn();
		long long a[n],d[n];
		map<long long,long long> ans;
		map<long long,long long> :: iterator j;
		for(i=0;i<n;i++)
		{
			//cin>>a[i];
			a[i]=getn();
		}
		for(i=0;i<n;i++)
		{
			//cin>>l;
			l=getn();
			d[i]=a[i]+l;
		}
		sort(a,a+n);
		sort(d,d+n);
		p=0;q=0;count=0;x=LONG_LONG_MIN;
		while(p<n)
		{
			if(a[p]<d[q])
			{
				count++;
				p++;
				if(count>x)
					x=count;
			}
			else
			{
				count--;
				q++;
			}

		}
		cout<<x<<endl;
	}
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long int t;
	cin>>t;
	while(t>0)
	{
	long long int n,a,b;
	cin>>n>>a>>b;
	long long int cheap = a*n*n + b*n*n;
	long long int curcheap = 0;
	for(long long int i = 0;i<=n;i++)
	{
		curcheap = a*i*i + b*(n-i)*(n-i);
		if(curcheap<cheap)
		{
			cheap = curcheap;
		}
	}
	cout<<cheap<<endl;
	t=t-1;
	}
    return 0;
}

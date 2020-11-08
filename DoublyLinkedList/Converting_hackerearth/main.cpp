#include <iostream>
using namespace std;


long long int recursion(long long int x,long long int y,long long int z,long long int counts)
{
	long long int l;
	if(x==0)
      return 0;
	if (x==y)
	  return counts;
    if (x<y)
	 return recursion(x*z,y,z,counts+1);
	if (x<y && z==0)
	 return 0;
    if (x>y)
		{
			l=x-y;
			if(l%2==0)
			{
				return recursion(x-2,y,z,counts+1);
			}
			else
			{
			    return  recursion(x-1,y,z,counts+1);
			}
		}
}

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
        long long int a;
        long long int b;
        long long int c;
		cin>>a>>b>>c;
		cout<<recursion(a,b,c,0)<<endl;
	}
return 0;
}

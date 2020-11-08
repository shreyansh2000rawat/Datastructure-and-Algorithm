#include <iostream>

using namespace std;

int main()
{
    int x,y,s,t;
    cin>>x>>y>>s>>t;
    int final;
    t=t - (x+y);
    if(t>0)
    {final = 1;}

	int p = s*s-1;

	if(s==1)
	{
		if(t>=s)
		final = final + 3;
		else{
			final = final + t;
		}
	}
	else
	{
		while(p>0)
		{
			if(t>=s)
			{
				final = final + s;
				t=t-s;
				p=p-s;
			}
			else if(t<s)
			{
				final = final + t*2  + t/2;
				break;
			}
		}
	}



    cout<<final<<endl;
    return 0;
}

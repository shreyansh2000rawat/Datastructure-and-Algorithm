#include <iostream>

using namespace std;

int main()
{
    long long int n=0;
    long long int m=0;
    long long int k=0;

    cin>>n>>m>>k;

    long long int arr[n][m];

    long long int c=0;

    for(long long int i=0;i<n;i++)
    {
        for(long long int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0)
            {
                c=c+1;
            }
        }
    }
    if(c%(k*k)!=0)
    {
        cout<<"-1"<<endl;
    }
	else if(k==1)
	{
		cout<<c<<endl;
	}

    return 0;
}

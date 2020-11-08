/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,m;
    cin>>n>>x;
    priority_queue<long long int>pq;
    for(long long int i=0;i<n;i++)
    {
        cin>>m;
        if(m!=0)
        {
            pq.push(m);
        }
        else
        {
           long long int temp=x;
            while(temp && !pq.empty())
            {
                pq.pop();
                temp--;
            }
        }
    }
   long long int sum=0;
    //cout<<pq.size();
    //for(long long int i=0;i<=pq.size();i++)
       // cout<<pq.top();
       while(!pq.empty())
       {
           sum+=pq.top();
            pq.pop();
       }

    cout<<sum;

}

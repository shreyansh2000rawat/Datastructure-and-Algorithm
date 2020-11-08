#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long int num = 0;
	cin>>num;
	for(long long int i = num-2;i>=1;i--){
		if(__gcd(num, i)==1)
        {
            cout<<i<<endl;
            break;
        }
	}
	return 0;
}



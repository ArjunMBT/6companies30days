#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int square=(n*(n+1)*(2*n+1))/6;
	    cout<<square<<endl;
	}
	return 0;
}

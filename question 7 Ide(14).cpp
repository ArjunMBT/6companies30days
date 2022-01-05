//find th kid which gets the damaged toy
#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
  while(t--)
    {
    int m,n,k;
    cin>>m>>n>>k;
    cout<<(m+k-1)%n<<endl;
    
    }
	return 0;
}

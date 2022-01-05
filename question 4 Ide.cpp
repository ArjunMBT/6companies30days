// { Driver Code Starts
//Run Length Encoding  question 4
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{    int n=src.length();
  string sol="";
  int i=0;
  int j=0;
  while(j<n)
  {
      while(src[i]==src[j])
      {
      j++;
      }
      sol+=src[i]+to_string(j-i);
      i=j;
      
  }
  return sol;

    };
    
 

// { Driver Code Starts
//Ugly number question 5
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	      
	      vector <long long int > nm(n+1);// to  hold the number 
    
     nm[0]=1;//first ugly number  
    
   long long int a2(0),a3(0),a5(0);//to count the power of 2,3 and5
    
    for(int i=1;i<=n;i++)//to find and strore new  uglly number
    {
        nm[i] =min({2*nm[a2] , 3*nm[a3] , 5*nm[a5]});//store new ugly number
        
        if(2*nm[a2]==nm[i])//update frequency of 2,3 and 5;
            a2++;
            
       if(3*nm[a3]==nm[i])
            a3++;
            
       if(5*nm[a5]==nm[i])
            a5++;
    }
    return nm[n-1];//returning nth element
	}
	      
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
// Array Pair Sum Divisibility Problem  question 15
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
     
          
    int n,i;
     n=nums.size();
     if(n%2==0)
     {
    int b[k+1];
    for(i=0;i<k+1;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        if(nums[i]<0)
        return false;
        b[((nums[i])+k)%k]++;
        
    }

    int count=0;
for(i=1;i<(k+1)/2;i++)
{
    if(b[i]==b[k-i]&&)
    continue ;
    else
    {count=1; break;}
}

if(count==0)
return true;
else
return false;
}
return false;
}      
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
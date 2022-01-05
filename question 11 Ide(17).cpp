//Find Missing And Repeating 
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int freq[n+1]={0};
        for(int i=0;i<n;i++)
        freq[arr[i]]++;
        int a,c;
        for(int j=1;j<=n;j++)
        {
            if(freq[j]==2)
              c=j;
              if(freq[j]==0)
              a=j;
        }
        int *b=new int[2];
        b[0]=c;
        b[1]=a;
        return b;
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
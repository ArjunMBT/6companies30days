// { Driver Code Starts
//Count the subarrays having product less than k  question 3
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int i,j;//to find number of element required whose product less than k
        long long product=1;//to hold the product;
        int count=0;
        i=0;
      //  int length;
        for(j=0;j<n;j++)
        {
            product=product*a[j];
            {
              while(i<j && product>=k)
              product/=a[i++];
            //  i++;//shit pointer to the next element 
             } 
             if(product<k){
           int  length=j-i+1;//element whose product less than k;
             count+=length;
             }
        }
        return count;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
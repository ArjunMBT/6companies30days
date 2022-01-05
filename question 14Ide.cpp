//Minimum Size Subarray Sum question 14
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n=nums.size();
        if(n<=0)
            return 0;
        vector<int>sum;
        sum.push_back(nums[0]);
        int m,i;
        for(i=1;i<n;i++)
        {
           m=sum[i-1];
            m+=nums[i];
            sum.push_back(m);
        }
         int count,miin;
        miin=INT_MAX;
        for(i=n-1;i!=1;i--)
        {for(int j=i-1;j!=0;j--)
            if(sum[i]-sum[j]>=target)
            {
                count=(i-j);
                break;
               
            }
         miin=min(count,miin);
        }
       
        return miin;
    }
};
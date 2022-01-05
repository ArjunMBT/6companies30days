//Print Anagrams Together  question1
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        int i,n;
        n=string_list.size();
        
        map<string,vector<string>>m;
        string s;
        for(i=0;i<n;i++)
        {
            s=string_list[i];
            sort(s.begin(),s.end());
            m[s].push_back(string_list[i]);
        }
        vector<vector<string>>sol;
        for(auto j=m.begin();j!=m.end();j++)
        sol.push_back(j->second);
        return sol;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
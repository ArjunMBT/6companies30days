//Greatest Common Divisor of Strings question 6
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.length()>str2.length())
            swap(str1,str2);
        for(int j=str1.size();j>=1;j--)
        {
            if(str1.size()%j!=0)
                continue;
            if(str2.size()%j!=0)
                continue;
            string s=str1.substr(0,j);
            int f=1;
            for(int i=0;i<str1.size();i+=j)
            {
                if(str1.substr(i,j)!=s)
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
                continue;
            for(int i=0;i<str2.size();i+=j)
            {
                if(str2.substr(i,j)!=s)
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
                continue;
            return s;
        }
        return "";
    }
};
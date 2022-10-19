class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<string> v(numRows,"");
        
        int i=0;int k=0;
        int n=s.size();
        while(i<n)
        {
            k=0;
            while(k<numRows&&i<n)
                v[k++]+=s[i++];
            k-=2;
            while(k>0&&i<n)
                v[k--]+=s[i++];
            
        }
        string ans="";
        
        
        for(auto x:v)
            ans+=x;
        return ans;
    }
};

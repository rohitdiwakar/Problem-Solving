class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int ans=0;
        unordered_map<int,int>mp;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                l=max(mp[s[i]]+1,l);
            }
            mp[s[i]]=i;
            ans=max(ans,i-l+1);
        }
        return ans; 
    }
};

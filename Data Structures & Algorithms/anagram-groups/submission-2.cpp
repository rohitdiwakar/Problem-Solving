class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            vector<int>count(26,0);
            for(char c:strs[i]){
                count[c-'a']++;
            }
            string dummy = to_string(count[0]);
            for(int i=1;i<26;i++){
                dummy+= ','+to_string(count[i]);
            }
            mp[dummy].push_back(strs[i]);
            
        }

        vector<vector<string>>ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;

    }
};

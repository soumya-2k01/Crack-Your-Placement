class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        map<string,vector<string>> m;
        for(int i=0; i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto it: m){
            res.push_back(it.second);
        }
        return res;
    }
};

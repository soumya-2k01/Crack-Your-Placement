class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           
        int m = strs[0].length();
        int n = strs.size();
        string ans = "";
        for(int i =0; i<m; i++){
            char c = strs[0][i];
            bool match = true;
            for(int j =1; j<n; j++){
                if(strs[j].length()<=i || c!=strs[j][i]){
                    match = false;
                    break;
                }
                
            }
            if(match==true){
                ans+=c;
            }
            else break;
            
        }
        return ans;
    }
};

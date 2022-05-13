class Solution {
public:
    string convertToTitle(int col) {
        string ans = "";
        while(col){
            ans+='A'+(col-1)%26;
            col= (col-1)/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i=n-1;
        string res = "";
        int flag = 0;
        while(i>=0){
            string temp = "";
            while(i >=0 && s[i]!=' '){
                temp.push_back(s[i]);
                i--;
            }

            if(!temp.empty())flag = 1;
            else flag = 0;
            while(!temp.empty()){
                res.push_back(temp.back());
                temp.pop_back();
            }
            
            if(flag)res.push_back(' ');

            i--;
        }       
        res.pop_back();
        return res;
        
    }
};

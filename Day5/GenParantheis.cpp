class Solution {
public:
    void paran(int open, int close, vector<string> &res, string temp, int n){
        if(open==n){
            while(close!=n){
                temp+=")";
                close++;
            }
            res.push_back(temp);
            return;
        }
        temp+="(";
        paran(open+1,close,res,temp,n);
        temp.pop_back();
        if(open>close){
            temp+=")";
            paran(open,close+1,res,temp,n);
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        int open = 0, close = 0;
        vector<string> res;
        string temp = "";
        paran(open,close,res,temp,n);
        return res;
    }
}; 

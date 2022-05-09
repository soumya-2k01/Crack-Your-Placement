class Solution {
public:
    pair<int,int> checkpalin(string s, int i, int j){
        while(i<j){
            if(s[i]!=s[j])return {i,j};
            i++;
            j--;
        }
        return {i,j};
    }
    
    bool ispalin(string s, int i, int j){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int n = s.length();
        pair<int,int> p;
        p = checkpalin(s,0,n-1);
        if(p.first>=p.second){
            return true;
        }
        else{
            if(ispalin(s,p.first+1,p.second) || ispalin(s,p.first,p.second-1)){
                return true;
            }
            else return false;
        }
    }
}; 

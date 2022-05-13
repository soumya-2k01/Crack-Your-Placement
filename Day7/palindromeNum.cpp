class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)return false;
        long long ex = 0, temp = x, value=1;
        while(temp){
            ex*=10;
            ex+=(temp%10);
            temp/=10;
        }
        if(ex==x)return true;
        return false;
    }
};

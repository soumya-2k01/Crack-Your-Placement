class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 )return true;
        if(n<1)return false;
        int count = 0;
        while(n>1){
            if(n%2)return false;
            n = n/2;count++;
        }
        return true;
    }
};

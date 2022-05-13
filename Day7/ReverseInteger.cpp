class Solution {
public:
    int reverse(int x) {
        
        int rev = 0;
        int temp = abs(x);
        bool flag=0;
        if(x<0)flag = 1;
        if(x>2147483647 || x<-2147483647)return 0;
        while(temp){
            if(rev > (2147483647-(temp%10))/10)return 0;
            rev = (rev*10) + (temp%10);
            temp/=10;
        }
        if(flag)return -1*rev;
        return rev;
        
    }
};

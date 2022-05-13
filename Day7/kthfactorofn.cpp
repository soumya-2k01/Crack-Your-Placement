class Solution {
public:
    int kthFactor(int n, int k) {
        
        int i =1;
        while(i<=n/2 && k>0){
            if(n%i==0)k--;
            if(k==0)break;
            i++;
        }
        if(k==1)return n;
        if(k>1)return -1;
        return i;
    }
};

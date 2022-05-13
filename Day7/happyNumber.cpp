class Solution {
public:
    int solve(int n){
        int ans = 0;
        while(n){
            ans+= (n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    
    bool isHappy(int n) {
        
        set<int> res;
        while(1){
            int sum = solve(n);
            if(sum==1)return true;
            if(res.find(sum)!=res.end())return false;
            res.insert(sum);
            n = sum;
        }
        return true;
    }
};

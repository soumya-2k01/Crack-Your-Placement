class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
          //4 9 9 7 4 5
        map<int,int> m;
        int cnt = 0, rem = 0, sum=0;
        m[0]++;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
            int rem = sum%k;
            if(rem<0){
                if(m.find(sum%k+k)!=m.end()){
                    cnt+=m[sum%k+k];
                }
                m[sum%k+k]++;
            }
            else{
                if(m.find(sum%k)!=m.end()){
                    cnt+=m[sum%k];
                }    
                m[sum%k]++;
            }
            
            
        }
        return cnt;
    }
};

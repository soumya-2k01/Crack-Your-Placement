class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int i = n-2, need = 1;
        while(i>=0){
            if(nums[i] >= need){
                need = 1;
            }
            else{
                need++;
            }
            i--;
        }
        if(need ==1)return true;
        return false;
        
    }
};

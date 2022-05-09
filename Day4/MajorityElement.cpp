class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int vote = 0, n = nums.size(),ans;
        for(int i=0; i<n; i++){
            if(vote==0){
                ans = nums[i];
                vote++;
            }
            else if(nums[i]==ans){
               vote++; 
            }
            else{
                vote--;
            }
        }
        return ans;
    }
};

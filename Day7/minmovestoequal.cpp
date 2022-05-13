class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, mini = INT_MAX;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            mini = min(mini,nums[i]);
        }
        return sum-n*mini;
    }
};

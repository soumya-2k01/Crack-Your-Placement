class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i =0, j = 0;
        while(j<n-1){
            int temp = nums[j];
            while(j<n-1 && nums[j+1]==temp)j++;
            if(j==n-1)break;
            nums[i] = nums[j];
            i++;
            j++;
        }
        nums[i] = nums[j];
        return i+1;
    }
};

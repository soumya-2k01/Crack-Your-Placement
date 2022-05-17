class Solution {
public:
    
    
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1;
        int mid = l+(r-l)/2;
        while(l<r){
            if(nums[mid]<nums[mid+1]){
                l=mid+1;
            }
            else r = mid;
            mid = l+(r-l)/2;
        }
        return l;
    }
};

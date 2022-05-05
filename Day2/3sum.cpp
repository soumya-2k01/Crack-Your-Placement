class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        if(n<3){
            return {};
        }
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int i =0;
        while(i<n){
            int a = nums[i];
            int l = i+1, r = n-1;
            while(l<r){
                if(nums[l]+nums[r]== -1*a){
                    res.push_back({a,nums[l],nums[r]});
                    int t1 = nums[l], t2 = nums[r];
                    while(l<n && nums[l]==t1){
                        l++;
                    }
                    while(r>=0 && nums[r]==t2){
                        r--;
                    }
                }
                else if(l<n && nums[l]+nums[r] < -1*a){
                    l++;
                }
                else r--;
            }         
            while(i<n && a==nums[i]){
                i++;
            }
            
        }
        
        return res;
    }
};

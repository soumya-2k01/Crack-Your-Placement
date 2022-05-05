class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        if(n<4){
            return {};
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        while(i<n){
            int tar = target-nums[i], j = i+1;
            while(j<n){
                int t = tar-nums[j];
                int l = j+1, r = n-1;
                while(l<r){
                    if(nums[l]+nums[r]==t){
                        res.push_back({nums[i],nums[j],nums[l],nums[r]});
                        int p1 = nums[l], p2 = nums[r];
                        while(l<n && p1==nums[l]){
                            l++;
                        }
                        while(r>=0 && p2==nums[r]){
                            r--;
                        }
                    }
                    else if(nums[l]+nums[r]<t){
                        l++;
                    }
                    else r--;
                }
                int tempu = nums[j];
                while(j<n && nums[j]==tempu){
                    j++;
                }
            }
            int tempo = nums[i];
            while(i<n && nums[i]==tempo){
                i++;
            }
        }
        return res;
    }
};

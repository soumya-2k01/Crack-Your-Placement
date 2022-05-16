class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        vector<long long int> ans(n,1);
        int prod = 1;
        int i =0;
        while(i<n){
            ans[i]*= prod;
            prod *= nums[i];
            i++;
        }
        i =n-1, prod = 1;
        while(i>=0){
            ans[i] *= prod;
            prod *= nums[i];
            i--;
        }
        return ans;
    }
};

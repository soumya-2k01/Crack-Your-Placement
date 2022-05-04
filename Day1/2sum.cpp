class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> result;
        for(int i=0; i < nums.size(); i++){
            if(m.count(target - nums[i])){
                
                auto it1 = m.find(target-nums[i]);
              /*  cout<<*it1.second<<endl;
                cout<<*it2.second<<endl;*/
                result.push_back(it1->second);
                result.push_back(i);
                break;
            }else{
                m.insert({nums[i],i});
            }
        }
    
        return result;
    }
};

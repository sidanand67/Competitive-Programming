class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> store;
        for (int i = 0; i < nums.size(); i++){
            if(store.find(nums[i]) != store.end()){
                if(i != store[nums[i]]){
                    return {i, store[nums[i]]}; 
                }
            }
            int diff = target-nums[i];
            store[diff]=i;
        }
        return {};
    }
};

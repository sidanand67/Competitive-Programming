class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxsum = INT_MIN;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(sum > maxsum ){
                maxsum = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        } 
        return maxsum;
    }
};
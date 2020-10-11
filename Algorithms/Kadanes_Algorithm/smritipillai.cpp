class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxsum = INT_MIN;
        if(nums.size()==1){
            return nums[0];
        }
        
        /* The for loop looks for all contiguous segments of the array (sum is used for this). And keep track of maximum sum contiguous segment among all segments (maxsum is used for this). 
        Each time we get a positive sum compare it with maxsum and update maxsum if it is greater than the existing maxsum */

        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(sum > maxsum ){
                maxsum = sum;
            }
            if(sum < 0){            /* if the sum is less than 0, update it to zero because we are looking for maximum sum in the array */
                sum = 0;
            }
        } 
        return maxsum;
    }
};
/* Using a hashmap here, that will store the element (key) and count of the element (value) stored in the map.
Before storing the element in the map, we check if the count is greater than n/2 (n is the size of the array), if so,
we return the element.
Time complexity : O(n) */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        map<int, int> m;
        int cnt=1;
        for(int i=0; i< nums.size(); i++){
            if(m.find(nums[i])!=m.end()){
                m[nums[i]] = m[nums[i]]+1;
                if(m[nums[i]] > nums.size()/2){
                    return nums[i];
                }
            }
            else{
                m[nums[i]] = cnt;
            }
        }
        return -1;
    }
};
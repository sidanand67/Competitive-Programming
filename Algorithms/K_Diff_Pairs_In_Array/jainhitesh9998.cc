class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int i : nums){
            if(count.find(i) != count.end()) {
                count[i]++;
            } else {
                count[i] = 1;
            }
        }
        int pair = 0;
        for(auto i : count) {
            if(count.find(i.first + k) != count.end()) {
                if(k==0){
                    if(count.find(i.first + k)-> second > 1){
                        pair++;  
                    }
                } else {
                    // if(count.find(i.first + k)-> second){
                        pair++;
                        // i.second = 0;    
                    // }
                    
                }
            }
        }
        return pair;
    }
};

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int max_dist = INT_MIN;
        for(int i = 0; i < arrays.size() - 1; i++) {
            for(int j = i+1; j < arrays.size(); j++) {
                int dist = abs(*arrays[i].begin() - *(arrays[j].end()-1));
                if(dist > max_dist){
                    max_dist = dist;
                }
                dist = abs(*(arrays[i].end()-1) - *arrays[j].begin());
                if(dist > max_dist){
                    max_dist = dist;
                }
            }
        }
        return max_dist;
    }
};

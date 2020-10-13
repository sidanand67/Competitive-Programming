#include<bits/stdc++.h>
typedef long double LD;
typedef long long LL;
 
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> m;
    vector<int> res;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]=i;
    }
    for(int i = 0; i < nums.size(); i++){
        if(m[target - nums[i]] && m[target - nums[i]]!=i ){
            res.push_back(i);
            res.push_back(m[target - nums[i]]);
            break;
        }
    }
    return res;
}

int main() {

	ios_base::sync_with_stdio(false);cin.tie(NULL);	cout.tie(NULL);

	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int size;
    cin>>size;
    vector<int> ar(size);
    for(int i = 0; i < size; i++)
    {
        cin>>ar[i];
    }
    int target;
    cin>>target;
    vector<int> result;
    result = twoSum(ar,target);
    for (int i = 0; i < result.size(); ++i)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}

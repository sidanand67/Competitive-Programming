#include<bits/stdc++.h>
typedef long double LD;
typedef long long LL;
 
using namespace std;
 
#define sz(A) (int)(A).size()
#define mp make_pair
#define pb push_back

void nextPermutation(vector<int>& nums) {
    int n = nums.size(), k, l;
    // In this for loop finding first value which is smaller then its right value from end
    for (k = n - 2; k >= 0; k--) {
        if (nums[k] < nums[k + 1]) {
            break;
        }
    }
    if (k < 0) { //if k<0 then reverse it
        reverse(nums.begin(), nums.end());
    } else {
        for (l = n - 1; l > k; l--) {
            if (nums[l] > nums[k]) { //finding element which is greater than element at k from end
                break;
            }
        } 
        swap(nums[k], nums[l]); //swapping elements at k and l
        reverse(nums.begin() + k + 1, nums.end()); // reversing array from index k to end
    }
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    nextPermutation(A);
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
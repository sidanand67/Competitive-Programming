class Solution {
public void reverse(int[]nums,int start,int end){
while(start<end){
int temp=nums[start];
nums[start]=nums[end];
nums[end]=temp;
start++;
end--;
}
}
public void nextPermutation(int[] nums) {
int n=nums.length;
int k=n-1;
for(int i=n-1;i>0;i--){
if(nums[i-1]>=nums[i])
k=i-1;
else break;
}
if(k==0){
reverse(nums,0,n-1);
}
else if(nums.length!=1){
k=k-1;
for(int i=n-1;i>k;i--){
if(nums[i]>nums[k]){
int temp=nums[i];
nums[i]=nums[k];
nums[k]=temp;
break;
}
}
reverse(nums,k+1,n-1);
}

}
}
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int N = nums.size();
        int ans = nums[0];

        for(int i=0;i<N;i++){
            if(nums[i]<nums[(i-1+N)%N] && nums[i]<nums[(i+1)%N]){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
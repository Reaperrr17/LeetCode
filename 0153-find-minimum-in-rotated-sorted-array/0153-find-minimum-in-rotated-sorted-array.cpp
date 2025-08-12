class Solution {
public:
    int findMin(vector<int>& nums) {

        int N = nums.size();
        for(int i=0;i<N;i++){
            if(nums[i]<nums[(i-1+N)%N] && nums[i]<nums[(i+1)%N]){
                return nums[i];
            }
        }
        return nums[0];
        
    }
};
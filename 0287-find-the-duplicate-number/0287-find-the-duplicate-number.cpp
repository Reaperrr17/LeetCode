class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int N = nums.size();
        int ans;

        for(int i=0;i<N;i++){

            while(nums[i]!=i+1){
                if(nums[i]==nums[nums[i]-1]){
                    ans =  nums[i];
                    break;
                }
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        return ans;
    }
};
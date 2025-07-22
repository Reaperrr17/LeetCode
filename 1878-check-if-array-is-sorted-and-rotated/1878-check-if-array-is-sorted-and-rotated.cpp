class Solution {
public:
    bool check(vector<int>& nums) {
        int startindex = 0;
        int N = nums.size();

        for(int i=0;i<N;i++){
            if(nums[i]<nums[(i-1+N)%N] && nums[i]<=nums[(i+1)%N]){
                startindex = i;
                break;
            }
        }
        
        reverse(nums.begin(),nums.begin()+startindex);
        reverse(nums.begin()+startindex,nums.end());

        for(int i=1;i<N;i++){
            if(nums[i]>nums[i-1]){
                return false;
            }
        }

        return true;
        
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int N = nums.size();
        if(N==1){
            return nums[0];
        }else if(nums[0]<nums[(N-1)%N] && nums[0]<nums[1]){
            return nums[0];
        }else if(nums[N-1]<nums[N-2] && nums[N-1]<nums[0]){
            return nums[N-1];
        }else{
            int ans;
            int st = 1;
            int end = N-2;

            while(st<=end){

                int mid = st + (end-st)/2;
                if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                    ans = nums[mid];
                    break;
                }else if(nums[mid]>=nums[0]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
            return ans;
        }
    }
};
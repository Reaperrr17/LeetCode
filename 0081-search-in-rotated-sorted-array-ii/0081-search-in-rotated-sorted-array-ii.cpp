class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int st = 0;
        int end = nums.size()-1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target){
                return true;
            }else if(nums[mid]==nums[st] && nums[st]==nums[end]){
                st = st+1;
                end = end-1;
            }
            else if(nums[mid]>=nums[st]){
                if(target>=nums[st] && target<nums[mid]){
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }else{
                if(target>=nums[mid] && target<=nums[end]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return false;
    }
};
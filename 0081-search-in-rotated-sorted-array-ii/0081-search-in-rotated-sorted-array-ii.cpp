class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int N = nums.size();
        if(N==1){
            if(nums[0]==target){
                return true;
            }
            return false;
        }
        else if(nums[0]<nums[N-1]){
            int st=0;
            int end=N-1;

            while(st<=end){

                int mid = st + (end-st)/2;
                if(nums[mid]==target){
                    return true;
                }
                else if(nums[mid]>target){
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            return false;
        }
        else{
            int st = 0;
            int end = N-1;

            while(st<=end){

                int mid = st + (end-st)/2;

                if(nums[mid]==target){
                    return true;
                }
                else if(nums[mid]==nums[st] && nums[mid]==nums[end]){
                    st = st+1;
                    end = end-1;
                }
                else if(nums[mid]>=nums[st] && target>=nums[st] && target<nums[mid]){
                    end = mid-1;
                }
                else if(nums[mid]>=nums[st]){
                    st = mid+1;
                }
                else if(nums[mid]<=nums[end] && target>nums[mid] && target<=nums[end]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            return false;
        }
        
    }
};
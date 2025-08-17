class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int st = 0;
        int end = nums.size()-1;
        int firstpos = -1;
        int lastpos = -1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target){
                firstpos = mid;
                end = mid-1;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        if(firstpos == -1){
            return {-1,-1};
        }else{
            st = 0;
            end = nums.size()-1;

            while(st<=end){
                int mid = st + (end-st)/2;
                if(nums[mid]==target){
                    lastpos = mid;
                    st = mid+1;
                }else if(nums[mid]>target){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }
            return {firstpos,lastpos};
        }
    }
};
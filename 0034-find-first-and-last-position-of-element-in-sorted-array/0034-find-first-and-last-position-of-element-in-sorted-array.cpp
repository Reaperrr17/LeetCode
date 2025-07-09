class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int st = 0;
        int end = nums.size()-1;
        int prevpos = -1;
        int endpos = -1;

        while(st<=end){

            int mid = end - (end-st)/2;

            if(nums[mid]==target){
                prevpos = mid;
                end = mid-1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }

        st = 0;
        end = nums.size()-1;

        while(st<=end){

            int mid = end - (end-st)/2;

            if(nums[mid]==target){
                endpos = mid;
                st = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }

        return {prevpos, endpos};


        
    }
};
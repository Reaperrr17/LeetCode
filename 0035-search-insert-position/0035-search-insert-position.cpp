class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int st = 0;
        int end = nums.size()-1;
        int ans = end+1;

        while(st<=end){

            int mid = end - (end - st)/2;

            if(nums[mid]==target){
                ans = mid;
                break;
            }

            else if(nums[mid]>target){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
        
    }
};
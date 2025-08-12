class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int N = nums.size();
        
        int st=1;
        int end=N-2;
        int ans;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]){
                ans = mid;
                break;
            }
            else if(nums[mid]<=nums[mid+1]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        return ans;
    }
};
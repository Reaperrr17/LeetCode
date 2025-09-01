class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int N = nums.size();
        int st = 1;
        int end = N-2;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }else if(nums[mid]>nums[mid+1]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }

        return 0;
        
    }
};
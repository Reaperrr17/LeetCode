class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int N = nums.size();

        for(int i=0;i<N-1;i++){
            
            int st = i+1;
            int end = N-1;

            while(st<=end){
                int mid = st + (end-st)/2;

                if(nums[mid]==target-nums[i]){
                    return {i+1,mid+1};
                }else if(nums[mid]>target-nums[i]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }
        }
        return {0};
    }
};
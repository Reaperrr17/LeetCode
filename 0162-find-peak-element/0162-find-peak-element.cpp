class Solution {
public:
    int findPeakElement(vector<int>& nums) {

    
        int N = nums.size();

        if(N==1){
            return 0;
        }
        else if(N==2){
            if(nums[0]>nums[1]){
                return 0;
            }
            else if(nums[1]>nums[0]){
                return 1;
            }
        }
        
        else{
            if(nums[0]>nums[1]){
                return 0;
            }
            else if(nums[N-1]>nums[N-2]){
                return N-1;
            }
            else{
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
        }
        return 0;
    }
};
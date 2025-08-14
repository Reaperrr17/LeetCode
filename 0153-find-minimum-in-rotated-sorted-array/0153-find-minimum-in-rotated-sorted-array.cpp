class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int N = nums.size();

        if(nums[0]<=nums[N-1]){
            return nums[0];
        }
        else{
            if(nums[N-1]<nums[N-2]){
                return nums[N-1];
            }
            else{
                int st=1;
                int end=N-2;
                int ans;

                while(st<=end){
                    int mid = st + (end-st)/2;

                    if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                        ans = nums[mid];
                        break;
                    }
                    else if(nums[mid]>=nums[st]){
                        if(nums[end]>=nums[st]){
                            end = mid-1;
                        }
                        else{
                            st = mid+1;
                        }
                    }
                    else{
                        if(nums[end]<=nums[mid]){
                            st = mid+1;
                        }
                        else{
                            end = mid-1;
                        }
                    }
                }
                return ans;
            }
        }
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int N = nums.size();

        if(nums[0]<nums[N-1]){
            return nums[0];
        }
        else{
            int st=0;
            int end=N-1;
            int ans;

            while(st<=end){
                
                int mid = st + (end-st)/2;

                if(nums[mid]<=nums[(mid+1)%N] && nums[mid]<=nums[(mid-1+N)%N]){
                    ans = nums[mid];
                    break;
                }

                else if(nums[mid]<=nums[end]){
                    end = mid-1;
                }

                else{
                    st = mid+1;
                }
            }

            return ans;
        }
    }
};
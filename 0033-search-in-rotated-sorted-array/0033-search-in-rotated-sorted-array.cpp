class Solution {
public:
    int search(vector<int>& nums, int target) {

        int minvalueindex;
        int N = nums.size();
        int st=0;
        int end=N-1;
        int ans=-1;


        if(nums[0]<nums[N-1]){
            minvalueindex = 0;
        }
        else{
            st=0;
            end=N-1;

            while(st<=end){

                int mid = st + (end-st)/2;

                if(nums[mid]<=nums[(mid-1+N)%N] && nums[mid]<=nums[(mid+1)%N]){
                    minvalueindex = mid;
                    break;
                }
                else if(nums[mid]<=nums[end]){
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
        }

        st=0;
        end=minvalueindex-1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target){
                ans = mid;
                break;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        if(ans==-1){

            st=minvalueindex;
            end=N-1;

            while(st<=end){

                int mid = st + (end-st)/2;

                if(nums[mid]==target){
                    ans = mid;
                    break;
                }
                else if(nums[mid]>target){
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
        }
        return ans;


        
        
    }
};
class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {

        int N = nums.size();

        if(nums[0]>k){
            return k;
        }
        else{

            int st = 0;
            int end = N-1;
            int ans = -1;

            while(st<=end){

                int mid = st + (end-st)/2;

                if((nums[mid]-(mid+1))>=k){
                    ans = mid;
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            if(ans!=-1){
                return k+ans;
            }
            else{
                return k+N;
            }
        }
        
    }
};
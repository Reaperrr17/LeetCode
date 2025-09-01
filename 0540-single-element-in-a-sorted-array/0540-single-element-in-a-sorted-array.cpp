class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int N = nums.size();

        if(N==1){
            return nums[0];
        }else if(nums[0]!=nums[1]){
            return nums[0];
        }else if(nums[N-1]!=nums[N-2]){
            return nums[N-1];
        }else{

            int st = 1;
            int end = N-2;

            while(st<=end){

                int mid = st + (end-st)/2;

                if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                    return nums[mid];
                }else if(nums[mid]==nums[mid+1]){
                    int num1 = mid;
                    int num2 = N-(mid+2);
                    if(num1%2!=0){
                        end = mid-1;
                    }else{
                        st = mid+1;
                    }
                }else{
                    int num1 = mid-1;
                    int num2 = N-1-mid;
                    if(num1%2!=0){
                        end = mid-1;
                    }else{
                        st = mid+1;
                    }
                }
            }
            return 0;
        }
    }
};
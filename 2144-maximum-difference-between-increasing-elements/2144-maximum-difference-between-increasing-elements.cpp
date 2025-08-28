class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int N = nums.size();
        int min = nums[0];
        int maxdiff = INT_MIN;

        for(int i=1;i<N;i++){
            if(nums[i]<min){
                min = nums[i];
            }else{
                if(nums[i]-min>maxdiff){
                    maxdiff = nums[i]-min;
                }
            }
        }
        
        if(maxdiff<=0){
            return -1;
        }else{
            return maxdiff;
        }
    }
};
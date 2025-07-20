class Solution {
public:
    bool check(vector<int>& nums) {

        int smallestelementindex=0;
        int N = nums.size();

        if(N==1){
            return true;
        }
        else{
        for(int i=0;i<N;i++){
            if(nums[i]<nums[(i-1+N)%N] && nums[i]<=nums[(i+1)%N]){
                smallestelementindex = i;
                break;
            }
        }
        
        reverse(nums.begin(),nums.begin()+smallestelementindex);
        reverse(nums.begin()+smallestelementindex,nums.end());

        for(int i=1;i<N;i++){
            if(nums[i]>nums[i-1]){
                return false;
            }
        }
        return true;
        }
    }
};
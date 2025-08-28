class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int N = nums.size();
        int maxdiff = INT_MIN;
        vector <int> suffix(N);

        suffix[N-1] = nums[N-1];
        int maxelement = nums[N-1];

        for(int i=N-2;i>=0;i--){
            if(nums[i]>maxelement){
                suffix[i] = suffix[i+1];
                maxelement = nums[i];
            }else{
                suffix[i] = maxelement;
            }
        }

        for(int i=0;i<N-1;i++){
            if(suffix[i]-nums[i]>maxdiff){
                maxdiff = suffix[i]-nums[i];
            }
        }
        if(maxdiff<=0){
            return -1;
        }else{
            return maxdiff;
        }
    }
};
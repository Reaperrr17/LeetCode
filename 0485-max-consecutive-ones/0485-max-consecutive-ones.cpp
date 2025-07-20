class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;
        int N = nums.size();
        int k=0;
        int maxones=0;

        while(i<N){
            if(nums[i]==1){
                j=i;
                while(j<N && nums[j]==1){
                    j++;
                }
                k = j-i;
                maxones = max(maxones,k);
                i=j;
            }
            else{
                i++;
            }
        }

        return maxones;
        
    }
};
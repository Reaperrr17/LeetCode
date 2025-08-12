class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = nums[0];
        int N = nums.size();
        for(int i=1;i<N;i++){
            ans ^= nums[i];
        }
        return ans;
    }
};
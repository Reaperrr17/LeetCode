class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        k = k%N;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

    }
};
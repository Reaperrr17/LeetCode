class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0;
        int j=0;
        int N = nums.size();
        int k=0;

        while(i<N){
            while(j<N && nums[j]==nums[i]){
                j++;
            }
            nums[k]=nums[i];
            k++;
            i=j;
        }

        return k;
        
    }
};
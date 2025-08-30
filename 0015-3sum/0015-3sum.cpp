class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int N = nums.size();
        int start = 0;
        int end = N-1;
        int middle = 1;

        sort(nums.begin(),nums.end());

        set <vector<int>> ans;

        for(start=0;start<N-2;start++){

            end = N-1;
            middle = start+1;

            while(middle<end){

                if(nums[start]+nums[middle]+nums[end]==0){
                    ans.insert({nums[start],nums[middle],nums[end]});
                    middle++;
                }else if(nums[start]+nums[middle]+nums[end]>0){
                    end--;
                }else{
                    middle++;
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int N = nums.size();
        int start = 0;
        int end = N-1;
        int middle = 1;

        sort(nums.begin(),nums.end());

        vector <vector<int>> ans;

        for(start=0;start<N-2;start++){

            end = N-1;
            middle = start+1;
            if(start>0 && nums[start]==nums[start-1])
                continue;

            while(middle<end){

                if(nums[start]+nums[middle]+nums[end]==0){
                    ans.push_back({nums[start],nums[middle],nums[end]});
                    middle++;
                    end--;
                    while(middle<end && nums[middle]==nums[middle-1]){
                        middle++;
                    }
                    while(middle<end && nums[end]==nums[end+1]){
                        end--;
                    }
                }else if(nums[start]+nums[middle]+nums[end]>0){
                    end--;
                }else{
                    middle++;
                }
            }
        }
        return ans;
    }
};
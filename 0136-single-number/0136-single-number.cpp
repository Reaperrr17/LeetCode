class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <long long,int> hash;
        int ans;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(auto i:hash){
            if(i.second == 1){
                ans = i.first;
                break;
            }
        }

        return ans;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int N = nums.size();
        int maxelement = nums[0];
        int freqofmaxelement = 1;

        for(int i=1;i<N;i++){

            if(nums[i]==maxelement){
                freqofmaxelement++;
            }else{
                if(freqofmaxelement!=0){
                    freqofmaxelement--;
                }else{
                    maxelement = nums[i];
                    freqofmaxelement++;
                }
            }
        }
        return maxelement;

    }
};
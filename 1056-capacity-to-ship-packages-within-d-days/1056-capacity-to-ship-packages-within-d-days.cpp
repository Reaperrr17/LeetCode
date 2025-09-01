class Solution {
public:
    bool ispossible(long long maxweight,vector<int>& weights, int days){

        int numofdays = 1;
        long long sum = 0;

        for(int i=0;i<weights.size();i++){
            sum += weights[i];
            if(sum>maxweight){
                numofdays++;
                if(numofdays>days){
                    return false;
                }
                sum = weights[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        long long st = *(max_element(weights.begin(),weights.end()));
        long long end = accumulate(weights.begin(),weights.end(),0);
        int ans;

        while(st<=end){

            long long mid = st + (end-st)/2;

            if(ispossible(mid,weights,days)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }

        return ans;
    }
};
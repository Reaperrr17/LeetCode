class Solution {
public:
    bool ispossible(int maxweight,vector <int> &weights,int days){
        int pseudodays = 1;
        long long sum = 0;
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
            if(sum>maxweight){
                pseudodays++;
                if(pseudodays>days){
                    return false;
                }
                sum = weights[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int ans;
        int st = *(max_element(weights.begin(),weights.end()));
        int end = accumulate(weights.begin(),weights.end(),0);

        while(st<=end){
            int mid = st + (end-st)/2;

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
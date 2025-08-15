class Solution {
public:
    bool ispossible(int n,vector <int> &arr,int k){

        long long summ=0;
        int count=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>n){
                return false;
            }
            summ += arr[i];
            if(summ>n){
                count++;
                summ=0;
                summ+=arr[i];
            }
        }
        if(count>k){
            return false;
        }
        else{
            return true;
        }
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        long long sumofweights = accumulate(weights.begin(),weights.end(),0);

        int st = *(max_element(weights.begin(),weights.end()));
        int end = sumofweights;
        int ans;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(ispossible(mid,weights,days)){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};
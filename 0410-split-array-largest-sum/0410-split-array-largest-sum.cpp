class Solution {
  public:
    bool ispossible(int maxsum,vector <int> &arr,int k){
        int subarray = 1;
        long long sum = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxsum){
                return false;
            }
            sum += arr[i];
            if(sum>maxsum){
                subarray++;
                sum = arr[i];
            }
            if(subarray > k){
                return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& arr, int k) {
        int st = *(max_element(arr.begin(),arr.end()));
        int end = accumulate(arr.begin(),arr.end(),0);
        int ans;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(ispossible(mid,arr,k)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
        
    }
};
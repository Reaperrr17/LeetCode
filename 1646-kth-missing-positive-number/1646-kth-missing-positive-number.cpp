class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int m=0;
        vector <int> hash;
        int ans=arr.size()+k;

        for(int i=0;i<arr.size();i++){

            if(arr[i]>i+1){

                m = arr[i]-i-1;
                
            }
            hash.push_back(m);
            if(m>=k){
                if(i>0){
                    ans = arr[i-1]+k-hash[i-1];
                    break;
                }
                else{
                    ans=k;
                    break;
                }
            }
        }
        return ans;


        
    }
};
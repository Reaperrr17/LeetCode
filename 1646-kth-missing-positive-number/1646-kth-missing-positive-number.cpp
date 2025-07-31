class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int N = arr.size();
        int ans = 0;
        int numberofmissingnumbers=0;

        for(int i=0;i<N;i++){

            if(arr[i]!=i+1){ 

                if((arr[i]-(i+1))>=k){

                    if(i!=0){
                        ans = arr[i-1]+(k-numberofmissingnumbers);
                        break;
                    }
                    else if(i==0){
                        ans = k;
                        break;
                    }
                }

                numberofmissingnumbers = arr[i]-(i+1);
            }
        }
        if(ans==0){
            ans = arr[N-1]+k -numberofmissingnumbers;
        }
        return ans;
    }
};
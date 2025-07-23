class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {

        int i=0;
        int j=0;
        int N = arr.size();
        int len=0;
        int number=0;
        
        while(i<N){
            j=i;
            int summ=0;
            while(j<N){
                summ += arr[j];
                if(summ == k){
                    number++;
                }
                j++;
            }
            i++;
        }
        
        return number;
        
    }
};
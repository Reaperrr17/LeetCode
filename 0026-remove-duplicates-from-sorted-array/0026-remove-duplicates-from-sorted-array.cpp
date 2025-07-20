class Solution {
public:
    int removeDuplicates(vector<int>&arr) {

        int N = arr.size();
        int i=0;
        int j=0;
        int k=0;

        while(i<N){
            while(j<N && arr[j]==arr[i]){
                j++;
            }
            arr[k] = arr[i];
            k++;
            i=j;
        }

        return k;
        
    }
};
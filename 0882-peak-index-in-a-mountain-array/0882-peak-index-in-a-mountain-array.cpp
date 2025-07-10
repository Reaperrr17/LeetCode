class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int N = arr.size();

        if(N==1){
            return arr[0];
        }
        else{
            int st=1;
            int end=N-1;
            int ans;

            while(st<=end){

                int mid = st + (end-st)/2;

                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                    ans = mid;
                    break;
                }

                else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }

            return ans;
        }
        
    }
};
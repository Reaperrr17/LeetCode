class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int N = arr.size();
        int st=1;
        int end = N-2;
        int ans;

        while(st<=end){

            int mid = (st+end)/2;

            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                ans = mid;
                break;
            }
            else if(arr[mid]<=arr[mid-1]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        
        return ans;
    }
};
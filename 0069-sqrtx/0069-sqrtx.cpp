class Solution {
public:
    int mySqrt(int x) {

        
        int st = 0;
        int end = x;
        int ans;

        while(st<=end){

            long long mid = end - (end-st)/2;
            if(mid*mid == x){
                ans = mid;
                break;
            }

            else if(mid*mid < x){
                ans = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        return ans;
        
    }
};
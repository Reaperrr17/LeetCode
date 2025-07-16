class Solution {
public:
    int climbStairs(int n) {

        int first = 1;
        int second = 2;
        int ans;
        if(n==1){
            return first;
        }
        else if(n==2){
            return second;
        }
        else{
            for(int i=3;i<=n;i++){
                ans = first+second;
                first = second;
                second = ans;
            }
            return ans;
        }

        
    }
};
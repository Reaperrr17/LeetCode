class Solution {
public:
    int reverse(int x) {
        
        long long revx=0;

        while(x!=0){
            int rem = x%10;
            x/=10;
            revx = revx*10+rem;
        }
        if(revx>INT_MAX || revx<INT_MIN){
            return 0;
        }
        else{
            return revx;
        }
        
    }
};
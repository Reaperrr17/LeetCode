class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
            long long revx=0;
            int bk=x;
            while(bk!=0){
                int rem = bk%10;
                bk /= 10;
                revx = revx * 10 + rem;
            }
            if(revx==x)
                return true;
            else
                return false;
        }
        
    }
};
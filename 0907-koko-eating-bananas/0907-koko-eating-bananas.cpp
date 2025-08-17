class Solution {
public:
    bool ispossible(int maxbananas,vector <int> & piles,int maxhours){
        
        int hours = 0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=maxbananas){
                hours++;
            }else{
                hours += ceil(piles[i]/(double)maxbananas);
            }
            if(hours>maxhours){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
            int st = 1;
            long long end = *(max_element(piles.begin(),piles.end()));
            int ans;
            
            while(st<=end){
                long long mid = st + (end-st)/2;
                
                if(ispossible(mid,piles,h)){
                    ans = mid;
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }
            return ans;
        }
};
class Solution {
public:
    bool ispossible(long long maxbananas,vector <int> &piles,int h){
        long long time = 0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=maxbananas){
                time++;
            }else{
                time += (piles[i] + maxbananas - 1) / maxbananas;
            }
            if(time>h){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        long long st = 1;
        long long end = *(max_element(piles.begin(),piles.end()));
        long long ans;

        while(st<=end){

            long long mid = st + (end-st)/2;

            if(ispossible(mid,piles,h)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return (int)ans;
    }
};
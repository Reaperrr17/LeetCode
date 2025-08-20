class Solution {
public:
    int trap(vector<int>& height) {
        int N = height.size();

        vector <int> suffix(N);
        vector <int> prefix(N);

        prefix[0] = height[0];
        suffix[N-1] = height[N-1];
        int sum = 0;


        for(int i=1;i<N;i++){
            if(height[i]>prefix[i-1]){
                prefix[i]=height[i];
            }else{
                prefix[i]=prefix[i-1];
            }
        }

        for(int i=N-2;i>=0;i--){
            if(height[i]>suffix[i+1]){
                suffix[i] = height[i];
            }else{
                suffix[i] = suffix[i+1];
            }
        }

        for(int i=1;i<N-1;i++){
            if(height[i]<prefix[i-1] && height[i]<suffix[i+1]){
                sum += min(suffix[i+1],prefix[i-1])-height[i];
            }
        }

        return sum;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        
        int N = height.size();
        int totalwater = 0;

        vector <int> suffix(N);
        vector <int> prefix(N);

        prefix[0] = height[0];
        suffix[N-1] = height[N-1];

        int maxheight1 = height[0];
        int maxheight2 = height[N-1];

        for(int i=1;i<N;i++){
            prefix[i] = maxheight1;
            if(height[i]>maxheight1){
                maxheight1 = height[i];
            }
        }

        for(int i=N-2;i>=0;i--){
            suffix[i] = maxheight2;
            if(height[i]>maxheight2){
                maxheight2 = height[i];
            }
        }

        for(int i=1;i<N-1;i++){
            if(height[i]<suffix[i] && height[i]<prefix[i]){
                totalwater += min(suffix[i],prefix[i]) - height[i];
            }
        }

        return totalwater;
    }
};
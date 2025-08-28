class Solution {
public:
    int trap(vector<int>& height) {
        
        int N = height.size();
        int maxheight = height[0];
        int maxheightindex = 0;
        int max1 = height[0];
        int max2 = height[N-1];
        int totalwater = 0;

        for(int i=1;i<N;i++){
            if(height[i]>maxheight){
                maxheight = height[i];
                maxheightindex = i;
            }
        }

        for(int i=1;i<maxheightindex;i++){
            if(height[i]<max1){
                totalwater += max1 - height[i];
            }else{
                max1 = height[i];
            }
        }

        for(int i=N-2;i>maxheightindex;i--){
            if(height[i]<max2){
                totalwater += max2 - height[i];
            }else{
                max2 = height[i];
            }
        }

        return totalwater;
    }
};
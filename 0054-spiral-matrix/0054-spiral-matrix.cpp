class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int srow=0,scol=0,erow=matrix.size()-1,ecol=matrix[0].size()-1;
        vector <int> list;

        while(srow<=erow && scol<=ecol){

            for(int i=scol;i<=ecol;i++){
                list.push_back(matrix[srow][i]);
            }
            
            for(int i=srow+1;i<=erow;i++){
                list.push_back(matrix[i][ecol]);
            }
            
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                list.push_back(matrix[erow][i]);
            }
            
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                list.push_back(matrix[i][scol]);
            }
            srow++;scol++;erow--;ecol--;
        }
        
        return list;
        
    }
};
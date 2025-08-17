class Solution {
  public:
    bool ispossible(int maxpages,vector <int> &books,int k){
        long long sum = 0;
        int stu = 1;
        for(int i=0;i<books.size();i++){
            if(books[i]>maxpages){
                return false;
            }
            sum += books[i];
            if(sum>maxpages){
                stu++;
                sum = 0;
                sum = books[i];
            }
            if(stu>k){
                return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& books, int k) {
        // code here
            int st = *(max_element(books.begin(),books.end()));
            long long end = accumulate(books.begin(),books.end(),0);
            int ans;
            
            while(st<=end){
                long long mid = st + (end-st)/2;
                
                if(ispossible(mid,books,k)){
                    ans = mid;
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }
            return ans;
    }
};
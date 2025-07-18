class Solution {
public:
void merge(vector <int> &arr,int st,int end){
	int i=st;
	int mid = (st+end)/2;
	int j=mid+1;
	int m=0;
	vector <int> temp;
	while(i<=mid && j<=end){
		if(arr[i]<=arr[j]){
			temp.push_back(arr[i]);
			i++;	
		}
		else if(arr[j]<=arr[i]){
			temp.push_back(arr[j]);
			j++;
		}
	}
	while(i<=mid){
		temp.push_back(arr[i]);
		i++;
	}
	while(j<=end){
		temp.push_back(arr[j]);
		j++;
	}
	for(int k=st;k<=end;k++){
		arr[k]=temp[m];
		m++;
	}
}
void partition(vector <int> &arr,int st,int end){
	if(st<end){
		int mid = (st+end)/2;
		partition(arr,st,mid);
		partition(arr,mid+1,end);
		merge(arr,st,end);
	}
}

    vector<int> sortArray(vector<int>& nums) {
        partition(nums,0,nums.size()-1);
        return nums;

    
        
    }
};
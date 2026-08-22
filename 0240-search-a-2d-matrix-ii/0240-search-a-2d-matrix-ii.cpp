class Solution {
public:
    bool possible(vector<int>&arr,int m,int tar){
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==tar){
                return true;
            }
            else if(arr[mid]<tar){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            if((possible(arr[i],m,target))==true){
                return true;
            }

        }
        return false;
        
    }
};
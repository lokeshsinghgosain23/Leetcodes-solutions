class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
        
        int low=0;
        int high=n*m-1;
        while(low<=high){
            int mid=(low+high)/2;

            int ro=mid/m;
            int col=mid%m;
            if(arr[ro][col]==target){
                return true;
            }
            else if(arr[ro][col]<target){
                low=mid+1;;
            }
            // if(arr[ro][col]>target){
            //     high=mid-1;;
            // }
            else{
                high=mid-1;
            }
            
        }
        return false;

        
    }
};
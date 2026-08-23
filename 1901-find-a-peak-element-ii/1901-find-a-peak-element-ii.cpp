class Solution {
public:
    int maxii(vector<vector<int>>&arr,int mid){
        int n=arr.size();
        int mx=INT_MIN;
        int indx=-1;
        //traverse in whole array row wise
        for(int i=0;i<n;i++){
            if(mx<arr[i][mid]){
                mx=arr[i][mid];
                indx=i;
            }
        }
        return indx;

    }
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n =arr.size();
        int m=arr[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            //check largest element in each row in arr
            int row=maxii(arr,mid);
            int left=mid-1>=0 ? arr[row][mid-1]  :INT_MIN;
            int right=mid+1<m ? arr[row][mid+1] :INT_MIN; //<=m menas check it is in boundaryy...
            if(arr[row][mid]>left && arr[row][mid]>right){
                return {row,mid};
            }
            else if(arr[row][mid]<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }


        }
        return {-1,-1};


         
    }
};
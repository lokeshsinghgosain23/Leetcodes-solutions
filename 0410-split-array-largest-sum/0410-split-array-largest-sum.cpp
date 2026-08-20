class Solution {
public:
    int maxi(vector<int>&arr,int n){
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(mx<arr[i]){
                mx=arr[i];
            }
        }
        return mx;
    }
    int ssum(vector<int>&arr,int n){
        int sm=0;
        for(int i=0;i<n;i++){
            sm=sm+arr[i];
        }
        return sm;
    }
    int checksum(vector<int>&arr,int n,int mid){
        int pair=1;
        int sm=0;
        for(int i=0;i<n;i++){
            if(arr[i]+sm <=mid){
                sm+=arr[i];
            }
            else{
                pair++;
                sm=arr[i];
            }
        }
        return pair;
    }
    int splitArray(vector<int>&arr, int k) {
        int n=arr.size();
        int low=maxi(arr,n);
        int high=ssum(arr,n);
        while(low<=high){
            int mid=(low+high)/2;
            int lrsm=checksum(arr,n,mid);
            if(lrsm>k){
               // high=mid-1;
                low=mid+1;

            }
            else{
                //low=mid+1;
                high=mid-1;
            }
        }
        return low;
        
        
    }
};
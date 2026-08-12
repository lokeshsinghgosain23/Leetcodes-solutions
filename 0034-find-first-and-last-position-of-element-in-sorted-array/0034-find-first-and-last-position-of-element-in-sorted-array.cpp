class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int lob=lowerbound(arr,n,target);
        if(lob==n || arr[lob]!=target) return {-1,-1};
        int ub=upperbound(arr,n,target);
        vector<int>temp={lob,ub-1};
        return temp;
        
    }
    int lowerbound(vector<int>&arr,int n,int x){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=x){
                ans=mid;
                high=mid-1;

            }
            else low=mid+1;
        }
        return ans;
    }
    int upperbound(vector<int>&arr,int n,int x){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>x){
                ans=mid;
                high=mid-1;

            }
            else low=mid+1;
        }
        return ans;
    }
};
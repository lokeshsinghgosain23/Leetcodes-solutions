class Solution {
public:
    int possible(vector<int>&weights,int n,int capacity){
        int days=1;
        int load=0;
        for(int i=0;i<n;i++){
            if(load + weights[i]>capacity){
                days=days+1;
                load=weights[i];

            }
            else{
                 load+=weights[i];
            }
        }
        return days;
    }
    int maxi(vector<int>&weights,int n){
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(mx<weights[i]){
                mx=weights[i];
            }
        }
        return mx;
    }
    int ssum(vector<int>&weights,int n){
        int sm=0;
        for(int i=0;i<n;i++){
            sm=sm+weights[i];
        }
        return sm;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=maxi(weights,n);
        int high=ssum(weights,n);
        while(low<=high){
            int mid=(low+high)/2;
            int dayreq=possible(weights,n,mid);
            if(dayreq<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};
class Solution {
public:
    long long tothr(vector<int>& piles,int h){
        long long th=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            th += (piles[i] + h - 1) / h;
        }
        return th;
    }
    int maxi(vector<int>& piles){
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(maxi<piles[i]){
                maxi=piles[i];
            }

        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxi(piles);
        int ans=INT_MIN;
        while(low<=high){
            int mid=(low+high)/2;
            long long toth=tothr(piles,mid);
            if(toth<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    
    

};
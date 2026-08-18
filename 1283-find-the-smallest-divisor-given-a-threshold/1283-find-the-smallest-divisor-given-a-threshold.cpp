class Solution {
public:
    int ssum(vector<int>&nums,int n,int divisor){
        long long  tt=0;
        for(int i=0;i<n;i++){
            // tt+=ceil((double)nums[i]/divisor);
            tt+=(nums[i] + divisor - 1) / divisor;
        }
        return tt;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int ans=0;
        int high=*max_element(nums.begin(),nums.end());
      
        while(low<=high){
            int mid=(low+high)/2;
            long long tot=ssum(nums,n,mid);
            if(tot<=threshold){
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
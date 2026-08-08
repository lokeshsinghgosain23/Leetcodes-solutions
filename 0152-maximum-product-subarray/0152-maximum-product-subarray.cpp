class Solution {
public:
    int maxProduct(vector<int>&arr) {
        int n=arr.size();
        int maxi=arr[0];
        int mini=arr[0];
        int res=arr[0];
        
        for(int i=1;i<n;i++){
            int temp=arr[i];
            if(temp<0){
                swap(mini,maxi);
            }
            maxi=max(temp,maxi*temp);
            mini=min(temp,mini*temp);
            res=max(res,maxi);
        }
        return res;
        
    }
};
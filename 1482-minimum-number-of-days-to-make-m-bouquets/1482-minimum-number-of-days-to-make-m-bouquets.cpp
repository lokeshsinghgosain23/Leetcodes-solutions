class Solution {
public:
    bool ispossible(vector<int>&arr,int days,int m,int k,int n){
        int count=0;
        int bloom=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=days){
                count++;
            }
            else{
                bloom=bloom+(count/k);
                count=0;
            }
        }
        bloom=bloom+(count/k);
        if(bloom>=m) return true;
        else return false;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        long long tot=(long long) m*k;
        if(tot>n) return -1;
        // int n=arr.size();
        int low = *min_element(arr.begin(),arr.end());
        int high = *max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(ispossible(arr,mid,m,k,n)){
                high=mid-1;//means it is possible but there are more minimum should be presnet 
            }
            else{
                low=mid+1; // it is small so eliminat left halve and check riht halve;
            }
        }
        return low;
        
    }
};
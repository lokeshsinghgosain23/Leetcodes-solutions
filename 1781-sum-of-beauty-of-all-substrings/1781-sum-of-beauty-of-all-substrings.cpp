class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int ans=0;
        for(int low=0;low<n;low++){
            unordered_map<char,int>mpp;
            for(int high=low;high<n;high++){
                mpp[s[high]]++;
            
            int maxi=INT_MIN;
            int mini=INT_MAX;

            for(auto it:mpp){
                mini=min(it.second,mini);
                maxi=max(it.second,maxi);


            }
            int x=maxi-mini;
            ans+=x;
            }
        }
        return ans;
        
    }
};
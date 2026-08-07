class Solution {
public:
    void merge(vector<int>& a1, int m, vector<int>& a2, int n) {
        int left=m-1;
        int right=0;
        while(left>=0 && right<n){
            if(a1[left]>a2[right]){
                swap(a1[left],a2[right]);
                left--;
                right++;
            }
            else{
                break;
            }
        }
        sort(a1.begin(), a1.begin() + m);
        sort(a2.begin(), a2.end());
        for (int i = 0; i < n; i++) {
            a1[m + i] = a2[i];
        }
        
    }
};
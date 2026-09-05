class Solution {
public:
    int maxDepth(string s) {
        int len=s.length();
        

        int cnt=0;
        int maxi=0;
        for(int i=0;i<len;i++){
            
            if(s[i]=='('){
                cnt++;
                maxi=max(cnt,maxi);
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return maxi;
  
        
    }
};
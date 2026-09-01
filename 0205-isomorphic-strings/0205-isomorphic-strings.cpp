class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len=s.length();
        int ms[256]={0};
        int mt[256]={0};
        for(int i=0;i<len;i++){
            if(ms[s[i]]!=mt[t[i]]){ return false;}
            ms[s[i]]=i+1;
            mt[t[i]]=i+1;
        }
        return true;
       
    }
};
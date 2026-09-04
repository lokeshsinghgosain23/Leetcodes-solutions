class Solution {
public:
    string frequencySort(string s) { 
        map<int,int>mpp;
        int cnt=INT_MIN;
        
        //check fequenccy of reach char in string
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        string ch;
        while(!mpp.empty()){
            int cnt=0;
            char mx;
            for(auto it:mpp){
                if(it.second>cnt){
                    cnt=it.second;
                    mx=it.first;
                }
            }
        
        for (int i = 0; i < cnt; i++) {
                ch.push_back(mx);
        }
        mpp.erase(mx);

        }
        
        return ch;

        
         
    }
};
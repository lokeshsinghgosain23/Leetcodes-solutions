class Solution {
public:

    long long MIN_value=-pow(2,31);
    long long  MAX_value=pow(2,31)-1;

    
    int helps(string s,int i,long long  num,int sign){
        //checks i if it out of bound;
        if(i>s.length() || !isdigit(s[i])){
            return (int)(sign*num);
        }
        
        num = num * 10 + (s[i] - '0');

 
        if ((long long )sign * num <= MIN_value) return MIN_value;
        if ((long long )sign * num >= MAX_value) return MAX_value;

        return helps(s, i + 1, num, sign);
    }
    int myAtoi(string s) {
        int i=0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<s.length() && (s[i]=='+' || s[i]=='-')){
            sign=(s[i]=='-')? -1:1;
            i++;
        }
        return helps(s,i,0,sign);
    }
};
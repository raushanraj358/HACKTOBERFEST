class Solution {
public:
    unordered_map<string,int> m;
    int numDecodings(string s) {
        if(s.size()==0)return 1;
        if(s[0]=='0')return 0;
        if(m.count(s))return m[s];
        if(s.size()==1)return numDecodings(s.substr(1));
        if(s[0]=='2' and s[1]<='6')return m[s]= numDecodings(s.substr(1))+numDecodings(s.substr(2));
        else if(s[0]=='1')return m[s]= numDecodings(s.substr(1))+numDecodings(s.substr(2));
        return m[s]= numDecodings(s.substr(1));
    }
};
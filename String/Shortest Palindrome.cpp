class Solution {
public:
    vector<int> lps;
    int kmp(string s){
        int n=s.size();
        lps=vector<int>(n,0);
        for(int i=1,j=0;i<n;){
            if(s[i]==s[j])lps[i++]=++j;
            else if(j==0)i++;
            else j=lps[j-1];
        }
        return lps.back();
    }
    string shortestPalindrome(string s) {
        string tmp=s;
        reverse(tmp.begin(),tmp.end());
        int longest_pal_prefix=kmp(s+'#'+tmp);
        string to_add=s.substr(longest_pal_prefix);
        reverse(to_add.begin(),to_add.end());
        return to_add+s;
    }
};

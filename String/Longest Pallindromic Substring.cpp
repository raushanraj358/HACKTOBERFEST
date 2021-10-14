class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),i,j,res_len=1,res_end=1;
        bool dp[n+1][n+1];
        dp[0][0]=1;
        
        for(i=1;i<=n;i++){
            dp[0][i]=1;
            dp[1][i]=1;
        }
        
        for(i=2;i<=n;i++){
            for(j=i;j<=n;j++){
                
                if(s[j-1]==s[j-i] && dp[i-2][j-1]){
                    dp[i][j]=1;
                    res_len=i;
                    res_end=j;
                }
                
                else
                    dp[i][j]=0;
            }
        }
        
        return s.substr(res_end-res_len, res_len);
    }
};
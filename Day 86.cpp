//Edit Distance
class Solution {
public:
    int minDistance(string word1, string word2) {
        const int a=word1.length();
        const int b=word2.length();
        vector<vector<int>> dp(a+1,vector<int>(b+1));
        for(int i=1;i<=a;i++){
            dp[i][0] = i;
        }
        for(int j=1;j<=b;j++){
            dp[0][j] = j;
        }
        for(int i = 1;i<=a;i++){
            for(int j=1;j<=b;j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]})+1;
                }
            }
        }
        return dp[a][b];
    }
};

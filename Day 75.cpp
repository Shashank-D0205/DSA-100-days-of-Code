//Partition array for sum
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        int K=k+1;

        int dp[k+1];
        memset(dp,0,sizeof(dp));
        for(int s= n-1;s>=0;s--){
            int currMax=0;
            int end=min(n,s+k);
            for(int i=s;i<end;i++){
                currMax = max(currMax,arr[i]);
                dp[s%K]=max(dp[s%K],dp[(i+1)%K]+currMax*(i-s+1));
            }
        }
        return dp[0];
    }
};
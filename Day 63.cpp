//Max score after splitting a string
class Solution {
public:
    int maxScore(string s) {
        int l=-1;
        int zeros = 0;
        int ones = 0;
        int n=s.size();

        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                zeros++;
            }
            else{
                ones++;
            }
            l=max(l,zeros-ones);
        }
        ones += s.back() == '1';
        return l+ones;
    }
};
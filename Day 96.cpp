//Bag of tokens
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int score=0;
        int max_s=0;
        int l=0;
        int r=n-1;

        while(l<=r){
            if(power>=tokens[l]){
                power -= tokens[l];
                score += 1;
                l +=1;
                max_s = max(max_s,score);
            }
            else if(score>0){
                power += tokens[r];
                score -= 1;
                r -= 1;
            }
            else{
                break;
            }
        }
        return max_s;
    }
};
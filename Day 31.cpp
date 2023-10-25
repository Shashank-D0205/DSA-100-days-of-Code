//Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.size();
        int count =0;
        for(int i=l-1;i>=0;i--){
            if(s[i] == ' ' && count>0){
                break;
            }
            if(s[i] != ' '){
                count++;
            }
        }
        return count;
    }
};
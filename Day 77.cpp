//WordBreak
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int z=s.size();
        unordered_set<string> dict;
        for(auto word : wordDict)dict.insert(word);
        vector<int> safeState(z+1,0);

        safeState[0]=1;

        for(int len=1;len<=z;len++){
            for(int left = len-1;left>-1;left--){
                if(safeState[left]){
                    if(dict.find(s.substr(left,len-left)) != dict.end()){
                        safeState[len]=1;
                        break;
                    }
                }
            }
        }
        return safeState[z];
    }
};
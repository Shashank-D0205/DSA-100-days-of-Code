//Longest common prefix 
class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans = "";
        sort(v.begin(),v.end());
        int a=v.size();
        string first =v[0] ,last=v[a-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!= last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};
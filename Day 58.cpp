//Comb Sum II
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> currComb;
        findCombination(0,target,candidates,ans,currComb);//recursive func
        return ans;
    }
    void findCombination(int index,int target, vector<int>& candidates, vector<vector<int>>& ans, vector<int>& currComb){
        if(target==0){
            ans.push_back(currComb);//valid comb
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
                if(candidates[i]>target){
                    break;
                }
                currComb.push_back(candidates[i]);
                findCombination(i+1, target-candidates[i],candidates,ans,currComb);
                currComb.pop_back();
            
        }
    }
};
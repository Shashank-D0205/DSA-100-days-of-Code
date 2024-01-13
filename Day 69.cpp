//Permutation II
class Solution {
public:
    void main(vector<int>& nums, vector<vector<int>>& ans,int i){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            main(nums,ans,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        main(nums,ans,i);
        set<vector<int>> temp;
        for(auto it = ans.begin(); it != ans.end();it++){
            temp.insert(*it);
        }
        vector<vector<int>> finalans;
        for(auto it = temp.begin();it != temp.end();it++){
            finalans.push_back(*it);
        }
        return finalans;
    }
};
//Permutations
class Solution {
public:
    void pm(int i, set<vector<int>>&set,vector<int>& nums){
        if(i>=nums.size()){
            set.insert(nums);
            return;
        }
        for(int n=i;n<nums.size();n++){
            swap(nums[i],nums[n]);
            pm(i+1,set,nums);
            swap(nums[i],nums[n]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        set<vector<int>> set;
        pm(0,set,nums);
        vector<vector<int>> perm1(set.begin(),set.end());
        return perm1;
    }
};
//4Sum
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n =nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                long long fSum = static_cast<long long>(target) - nums[i] - nums[j];
                int l=j+1,h=n-1;
                while(l<h){
                    if(nums[l]+nums[h] == fSum){
                        vector<int> fAns = {nums[i],nums[j],nums[l],nums[h]};
                        ans.push_back(fAns);
                        while(l<h && nums[l]==nums[l+1]){
                            l++;
                        }
                        while(l<h && nums[h] == nums[h-1]){
                            h--;
                        }
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]<fSum){
                        l++;
                    }
                    else{
                        h--;
                    }
                }
            }
        }
        return ans;
    }
};
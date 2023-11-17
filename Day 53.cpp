//MINMAXPAIR SUM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        int minMaxPairSum = INT_MIN;
        while(l<r){
            int currPairSum = nums[l]+nums[r];
            minMaxPairSum=max(minMaxPairSum,currPairSum);
            l++;
            r--;
        }
        return minMaxPairSum;
    }
};
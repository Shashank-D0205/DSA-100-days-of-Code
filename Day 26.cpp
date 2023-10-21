//3Sum closest
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        int lastdiff = INT_MAX;
        for(int i=0;i<n-2;i++){
            int l = i+1,r =n-1;
            while(l<r){
                int csum = nums[l]+nums[i]+nums[r];
                int diff = abs(target-csum);
                if(diff<lastdiff){
                    sum = csum;
                    lastdiff =diff;
                }
                if(target>csum){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return sum;
    }
};
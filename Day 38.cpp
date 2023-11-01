//Jump Game 
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int last = 0;
        for(int i=0;i<n;i++){
            if(i>last){
                return 0;
            }
            last=max(last,nums[i]+i);
        }
        return 1;
    }
};
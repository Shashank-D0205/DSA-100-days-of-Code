//Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int r = 0,w=0,b=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                r++;
            }
            else if(nums[i]==1){
                w++;
            }
            else{
                b++;
            }
        }
        for(int i=0;i<r;i++){
            nums[i]=0;
        }
        for(int i=r;i<r+w;i++){
            nums[i]=1;
        }
        for(int i=r+w;i<n;i++){
            nums[i]=2;
        }
    }
};
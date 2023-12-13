//First & Last Pos of element in Sorted array 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2);
        res[0] = findStartPos(nums,target);
        res[1] = findEndPos(nums,target);
        return res;
    }
    private:
        int findStartPos(vector<int> & nums,int target){
            int l = 0,r =nums.size()-1,ans = -1;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(target == nums[mid]){
                    ans = mid;
                    r = mid-1;
                }
                else if(target>nums[mid]){
                    l =mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            return ans;
        }
        int findEndPos(vector<int> & nums, int target){
            int l = 0,r = nums.size()-1,ans=-1;
            while(l<=r){
                int mid = l+ (r-l)/2;
                if(target == nums[mid]){
                    ans = mid;
                    l =mid+1;
                }
                else if(target>nums[mid]){
                    l =mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            return ans;
        }
};
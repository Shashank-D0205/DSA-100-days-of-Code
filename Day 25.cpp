//Search Insert position
//Applied binary search ez

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first=0;
        int end= nums.size();
        if(target>nums[end-1]){
            return end;
        }
        while(first<=end){
            int mid = (first+end)/2;

            if(nums[mid] ==  target){
                return mid;
            }
            if(target < nums[mid]){
                end=mid-1;
            }
            else{
                first = mid+1;
            }
        }
        return first;
    }
};
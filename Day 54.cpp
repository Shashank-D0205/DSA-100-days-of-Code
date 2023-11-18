//Freq of the most frequent element
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int l=0,r=0;
       long res=0,total=0;

       while(r<nums.size()){
           total +=nums[r];
           while(nums[r]*static_cast<long>(r-l+1)>total+k){
               total -= nums[l];
               l +=1;
           }
           res=max(res,static_cast<long>(r-l+1));
           r += 1;
       }
       return static_cast<int>(res);
    }
};

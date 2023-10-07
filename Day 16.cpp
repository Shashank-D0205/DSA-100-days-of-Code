class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> comb;
        for (int i=0;i<n;i++){
            comb.push_back(nums1[i]);
        }
        for(int i=0; i<m; i++){
            comb.push_back(nums2[i]);
        }
        sort(comb.begin(), comb.end());

        int total =comb.size();

        if(total%2 == 1){
            return static_cast<double>(comb[total/2]);
        }
        else{
            int m1 = comb[total/2 -1];
            int m2 = comb[total/2];
            return static_cast<double>(m1+m2)/2;
        }
    }
};
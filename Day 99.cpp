//Count Elements with Maximum Frequency
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freqMap;
        for(int nums : nums){
            freqMap[nums]++;
        }
        int maxfreq = 0;
        for(const auto&pair : freqMap){
            maxfreq=max(maxfreq,pair.second);
        }
        int totalFreq = 0;
        for (const auto& pair : freqMap) {
        if (pair.second == maxfreq) {
            totalFreq += maxfreq;
            }
        }
        return totalFreq;
    }
};
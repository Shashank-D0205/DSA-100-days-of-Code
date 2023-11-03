//Insert Interval
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int k=-1;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][1]>=newInterval[0]){
                k=i;
                break;
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        for(int j=k;j<intervals.size();j++){
            if(newInterval[1]>=intervals[j][0]){
                newInterval[0] = min(newInterval[0],intervals[j][0]);
                newInterval[1] = max(newInterval[1],intervals[j][1]);
            }
            else{
                result.push_back(newInterval);
                newInterval = intervals[j];
            }
        }
        result.push_back(newInterval);
        return result;
    }
};
//Pascal traingle II
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> tria (rowIndex + 1);
        int colNum = 1;
        for(int r =0;r<=rowIndex;r++){
            vector<int>row(colNum, 1);
            tria[r] = row;
            for(int a = 1;a<colNum-1;a++){
                tria[r][a] = tria[r-1][a-1]+tria[r-1][a];
            }
            colNum++;
        }
        return tria[rowIndex];
    }
};
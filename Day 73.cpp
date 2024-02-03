//Pascal traingle
class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        if(numrows == 0){
            return {};
        }
        if(numrows == 1){
            return {{1}};
        }

        vector<vector<int>> prevrows = generate(numrows-1);
        vector<int> newrow(numrows ,1);
        for(int i=1;i<numrows-1;i++){
            newrow[i] = prevrows.back()[i-1]+prevrows.back()[i];
        }
        prevrows.push_back(newrow);
        return prevrows;
    }
};
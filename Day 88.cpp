//Excel Sheet Column Title
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber != 0) {
            int rem = (columnNumber - 1) % 26; 
            char ch = char(rem + 'A');
            result.push_back(ch);
            columnNumber = (columnNumber - 1) / 26; 
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
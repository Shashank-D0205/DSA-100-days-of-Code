//INT to ROMAN
class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        vector<pair<int, string>> storeintroman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400,  "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        for(int i=0;i< storeintroman.size();i++){
            while(num>=storeintroman[i].first){
                roman += storeintroman[i].second;
                num -= storeintroman[i].first;
            }
        }
        return roman;
    }
};
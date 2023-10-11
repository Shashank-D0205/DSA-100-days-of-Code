//first occurence in string
class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = haystack.find(needle);
        return (index != -1) ? index : -1;
    }
};
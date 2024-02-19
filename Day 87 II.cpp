//Reverse a string
class Solution {
private:
    void reverse(string& s, int l, int r) {
        while (l < r) {
            char temp = s[l];
            s[l++] = s[r];
            s[r--] = temp;
        }
    }

public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s, 0, n - 1);
        int i = 0, j = 0;
        while (j < n) {
            while (j < n && s[j] == ' ') {
                j++;
            }
            if (j < n && i > 0) {
                s[i++] = ' ';
            }
            int start = i;
            while (j < n && s[j] != ' ') {
                s[i++] = s[j++];
            }
            reverse(s, start, i - 1);
        }
        s.resize(i);
        return s;
    }
};
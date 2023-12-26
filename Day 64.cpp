//Min Changes To Make Altering Binary String
class Solution {
public:
    int minOperations(string s) {
        char c = s[0];
        int count1 = count(s, c);
        int count2;

        if (c == '0') {
            count2 = count(s, '1') + 1;
        } else {
            count2 = count(s, '0') + 1;
        }

        return min(count1, count2);
    }

private:
    int count(string s, char a) {
        int count = 0;

        for (int i = 1; i < s.length(); i++) {
            char current = s[i];

            if (current == a) {
                count++;
                if (a == '0') {
                    a = '1';
                } else {
                    a = '0';
                }
            } else {
                a = current;
            }
        }

        return count;
    }
};

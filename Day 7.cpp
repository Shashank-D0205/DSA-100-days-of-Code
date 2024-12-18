//palindrome number
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long xrev = 0;
        long long temp = x;

        while( temp != 0){
            int digit = temp % 10;
            xrev = xrev*10 + digit;
            temp /= 10;
        }
        return (xrev == x);
    }
};
//Pow(x,n)
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1;
        if (n < 0) {
            x = 1 / x;
            // Handle the case where n is the minimum value of integer
            // to avoid overflow when taking the absolute value
            if (n == INT_MIN) {
                x *= x;
                n /= 2;
            }
            n = -n;
        }
        return power(x, n);
    }

private:
    double power(double x, int n) {
        if (n == 0)
            return 1;
        double half = power(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};

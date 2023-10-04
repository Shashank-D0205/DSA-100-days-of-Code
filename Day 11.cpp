//Guess number

class Solution {
public:
    int guessNumber(int n) {
        int a=0;
        int b=n;
        while(a<=b){
            int mid = a+(b-a)/2;
            if(guess(mid) == 0){
                return mid;
            }
            else if(guess(mid) == -1){
                b = mid-1;
            }
            else {
                a = mid+1;
            }
        }
        return a;
    }
};
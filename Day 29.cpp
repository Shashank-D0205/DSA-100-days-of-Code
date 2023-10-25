//Container with most water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftline =0;
        int rightline = height.size()-1;
        int maxarea=0;

        while(leftline<rightline){
            int currentarea = min(height[leftline],height[rightline])*(rightline-leftline);
            maxarea = max(maxarea,currentarea);
            if(height[leftline]<height[rightline]){
                leftline++;
            }
            else{
                rightline--;
            }
        }
        return maxarea;
    }
};
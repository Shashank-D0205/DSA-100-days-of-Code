//Spiral Matrix II
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n,0));
        int i=0;
        int j;
        int k = 1;
        while(k<=n*n){
            j=i;
            while(j<n-i){
                arr[i][j++] = k++;
            }
            j=i+1;
            while(j<n-i){
                arr[j++][n-i-1] = k++;
            }
            j=n-i-2;
            while(j>i){
                arr[n-i-1][j--] = k++;
            }
            j=n-i-1;
            while(j>i){
                arr[j--][i]=k++;
            }
            i++;
        }
        return arr;
    }
};
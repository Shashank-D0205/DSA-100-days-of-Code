//Winner of an Array Game
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k ==1){
            return max(arr[0],arr[1]);
        }
        if(k>=arr.size()){
            return *max_element(arr.begin(),arr.end());
        }
        int initial_winner = arr[0];
        int consecutive_wins = 0;
        for(int i=1;i<arr.size();i++){
            if(initial_winner >arr[i]){
                consecutive_wins++;
            }
            else{
                initial_winner = arr[i];
                consecutive_wins = 1;
            }
            if(consecutive_wins == k){
                return initial_winner;
            }
        }
        return initial_winner;
    }
};
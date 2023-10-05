class Solution {
public:
    string convert(string s, int nR) {
        if(nR ==1 || nR >=s.length()){
            return s;
        }

        string result;
        int n =s.length();
        int cL = 2*nR -2;

        for(int i=0; i< nR; i++){
            for(int j=0; j + i < n; j += cL){
                result.push_back(s[j + i]);
                if( i !=0 && i!= nR-1 && j + cL - 1 <n){
                    result.push_back(s[j + cL - i]);
                }
            }
        }
        
        return result;
    }
};
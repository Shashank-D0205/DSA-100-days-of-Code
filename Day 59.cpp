//Multiply Strings
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" or num2 == "0"){
            return "0";
        }
        vector<int> num_1,num_2;
        for(int i=num1.size()-1;i>=0;i--){
            num_1.push_back(num1[i]-'0');
        }
        for(int i=num2.size()-1;i>=0;i--){
            num_2.push_back(num2[i]-'0');
        }
        return multiply1(num_1,num_2);
    }
    string multiply1(vector<int> num1,vector<int> num2){
        vector<int> res;
        auto c=0;
        for(int k=0;k<=num1.size()+num2.size()-2;k++){
            auto s=0;
            for(int i=0;i<=k;i++){
                if(i<num1.size() and k-i<num2.size()){
                    s += num1[i]*num2[k-i];
                }
            }
            res.push_back((s+c)%10);
            c=(s+c)/10;
        }
        while(c){
            res.push_back(c%10);
            c=c/10;
        }
        string ans = "";
        for(int i=0;i<res.size();i++){
            ans= to_string(res[i])+ans;
        }
        return ans;
    }
};
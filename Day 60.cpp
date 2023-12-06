//Letter comb of a phone no.
class Solution {
public:
    void c(int ind , string &digits, vector<string> &a, string &b , map<char,string> &m){
        if(ind == digits.size()){
            a.push_back(b);
            return;
        }
        string d=m[digits[ind]];
        for(int i=0;i<d.size();i++){
            b+=d[i];
            c(ind+1,digits, a , b , m);
            b.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> a;
        if(digits.size() == 0){
            return a;
        }
        string b;
        map<char,string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        c(0 , digits, a, b,m);
        return a;
    }
};
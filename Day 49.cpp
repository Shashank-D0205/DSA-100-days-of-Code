//Sort vowels in string
class Solution {
public:
    string sortVowels(string s) {
        int strsize = s.size();
        vector<char> vow;
        vector<int> vowPos;
        for(int i=0;i<strsize;i++){
            if(s[i]== 'a'|| s[i]== 'e'|| s[i]== 'i'|| s[i]== 'o'|| s[i]== 'u'|| s[i]== 'A'||s[i]== 'E'|| s[i]== 'I'|| s[i]== 'O'|| s[i]== 'U'){
                vow.push_back(s[i]);
                vowPos.push_back(i);
            }
        }
        sort(vow.begin(),vow.end());
        string result = s;
        for(int i=0;i<vowPos.size();i++){
            result[vowPos[i]] = vow[i];
        }
        return result;
    }
};
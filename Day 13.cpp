//valid parenthesis
class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        for(char a : s) {
            if(a == '(' || a== '{' || a == '['){
                st.push(a);
            }
            else{
                if(st.empty() || 
                (a == ')' && st.top() != '(') ||
                 (a == '}' && st.top() != '{') || 
                 (a == ']' && st.top() != '[')){
                     return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
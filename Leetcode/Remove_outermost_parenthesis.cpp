class Solution {
public:
    string removeOuterParentheses(string s) {
    string result;
    int flag = 0;

    for (char current : s)
        if ((current == '(' && flag++ > 0) || (current == ')' && flag-- > 1))
            result += current;

    return result;
}
};
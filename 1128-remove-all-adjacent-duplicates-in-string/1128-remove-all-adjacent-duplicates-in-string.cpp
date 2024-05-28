class Solution {
public:
    string removeDuplicates(const std::string& s) {
    vector<char> stack;
    
    for (char ch : s) {
        if (!stack.empty() && stack.back() == ch) {
            stack.pop_back();
        } else {
            stack.push_back(ch);
        }
    }
    
    return string(stack.begin(), stack.end());

    }
};
class Solution {
public:
    int calculate(string s) {
      stack<int> num; 
    stack<char> ch; 
        int result = 0;
        int curr = 0;
        char sign = '+'; 

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
     
            if (isdigit(c)) {
                curr = curr * 10 + (c - '0'); 
            }

      
            if (!isdigit(c) && c != ' ' || i == s.length() - 1) {
                if (sign == '+') {
                    num.push(curr);
                } else if (sign == '-') {
                    num.push(-curr);
                } else if (sign == '*') {
                    int top = num.top();
                    num.pop();
                    num.push(top * curr);
                } else if (sign == '/') {
                    int top = num.top();
                    num.pop();
                    num.push(top / curr);
                }
                
                sign = c;
                curr = 0;
            }
        }

        while (!num.empty()) {
            result += num.top();
            num.pop();
        }

        return result;
    }

};
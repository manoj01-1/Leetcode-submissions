#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        
        vector<string> less10 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> less20 = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> less100 = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        if (num == 0) return "Zero";
        return helper(num, less10, less20, less100);
    }

private:
    string helper(int num, const vector<string>& less10, const vector<string>& less20, const vector<string>& less100) {
        if (num < 10) return less10[num];
        if (num < 20) return less20[num - 10];
        if (num < 100) return less100[num / 10] + (num % 10 ? " " + less10[num % 10] : "");
        if (num < 1000) return less10[num / 100] + " Hundred" + (num % 100 ? " " + helper(num % 100, less10, less20, less100) : "");
        if (num < 1000000) return helper(num / 1000, less10, less20, less100) + " Thousand" + (num % 1000 ? " " + helper(num % 1000, less10, less20, less100) : "");
        if (num < 1000000000) return helper(num / 1000000, less10, less20, less100) + " Million" + (num % 1000000 ? " " + helper(num % 1000000, less10, less20, less100) : "");
        return helper(num / 1000000000, less10, less20, less100) + " Billion" + (num % 1000000000 ? " " + helper(num % 1000000000, less10, less20, less100) : "");
    }
};

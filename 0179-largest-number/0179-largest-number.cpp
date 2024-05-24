class Solution {
public:
    static bool cmp(int a, int b) {
        string str1 = to_string(a);
        string str2 = to_string(b);
        return str1 + str2 > str2 + str1;
    }

    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        string ans = "";
        for (int num : nums) {
            ans += to_string(num);
        }
        return ans[0] == '0' ? "0" : ans;
    }
};
#include <vector>
#include <algorithm>

class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        if (nums.empty()) return 0;
        
        std::vector<int> v;
        
        for (int num : nums) {
            auto it = std::lower_bound(v.begin(), v.end(), num);
            if (it == v.end()) {
                v.push_back(num);
            } else {
                *it = num;
            }
        }
        
        return v.size();
    }
};

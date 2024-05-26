#include <algorithm>
#include <vector>

class Solution {
public:
    int findPairs(std::vector<int>& nums, int k) {
        if (k < 0) return 0; // Absolute difference cannot be negative
        
        std::sort(nums.begin(), nums.end());
        int left = 0, right = 1;
        int count = 0;
        
        while (left < nums.size() && right < nums.size()) {
            if (left == right || nums[right] - nums[left] < k) {
                right++;
            } else if (nums[right] - nums[left] > k) {
                left++;
            } else {
                count++;
                left++;
                right++;
                // Move the pointers to skip duplicates
                while (right < nums.size() && nums[right] == nums[right - 1]) {
                    right++;
                }
            }
        }
        
        return count;
    }
};

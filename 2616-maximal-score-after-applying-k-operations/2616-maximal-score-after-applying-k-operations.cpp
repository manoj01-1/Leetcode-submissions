class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long sum = 0;

        for (int i = 0; i < k; ++i) {
            int topElement = maxHeap.top();
            maxHeap.pop();
            sum += topElement;
            
            
            maxHeap.push((topElement + 2) / 3); 
        }

        return sum;
    }
};
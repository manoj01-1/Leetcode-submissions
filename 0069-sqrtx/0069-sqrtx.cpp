class Solution {
public:
    int mySqrt(int x) {
    if (x == 0 || x == 1) return x;  // Base case
    
    int left = 1, right = x, ans = 0;
    
    while (left <= right) {
        long mid = left + (right - left) / 2;
        
        if (mid * mid == x)
            return mid;  
        
        if (mid * mid < x) { 
            ans = mid;  
            left = mid + 1; 
        } else {
            right = mid - 1;  // Move left
        }
    }
    
    return ans;  

    }
};
class Solution {
public:
   
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // Handle cases where k > n
        
        // Step 1: Reverse the whole array
        reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};
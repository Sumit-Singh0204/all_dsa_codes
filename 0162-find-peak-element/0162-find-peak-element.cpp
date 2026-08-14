class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0,high = n-1;
        while(low < high){
            int mid =  low + (high - low)/2;

            if (nums[mid] < nums[mid + 1]) {
                // Ascending slope: peak must lie to the right
                low = mid + 1;
            } else {
                // Descending slope: mid itself could be the peak or peak is to the left
                high = mid;
            }
        }
        return low;     
    }
};
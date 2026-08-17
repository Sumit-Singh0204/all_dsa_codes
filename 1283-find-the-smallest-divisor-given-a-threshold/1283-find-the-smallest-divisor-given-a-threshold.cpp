class Solution {
public:
   
    int maxEl(vector<int>&nums){
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0 ;i<n ;i++){
           maxi = max(maxi ,nums[i]);
        }
        return maxi;
    }

    long long computeSum(const vector<int>& nums, int divisor){
        long long totalSum = 0;
        int n = nums.size();

        for(int i=0 ; i<n ;i++){  
        totalSum += (nums[i] + divisor -1)/divisor;
      }
        return totalSum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = maxEl(nums);
        int n = nums.size();
         int ans = high;
        while( low <= high){

        int mid = low +(high - low )/2;
        long long totalSum = computeSum(nums, mid);
        if(totalSum <= threshold){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
        }
        return ans;
       

    }
};
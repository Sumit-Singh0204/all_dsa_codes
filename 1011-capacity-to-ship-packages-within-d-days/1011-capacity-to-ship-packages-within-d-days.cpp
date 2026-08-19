class Solution {
public:

    int calculateDays(vector<int>& weights, int capacity){
        int n = weights.size();
        int daysCount = 1, currentLoad = 0;
        for(int i = 0;i < n ; i++){
        if(currentLoad + weights[i] > capacity){
            daysCount++ ;
            currentLoad = weights[i];
        }
        else{
            currentLoad += weights[i];
        }
      }
      return daysCount;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = 0, high = 0;
        for(int i = 0 ;i < n ;i++){
            low = max(low , weights[i]);
            high += weights[i];
        }
    
        int ans = high;
        while(low <= high){
            int mid = low+(high - low)/2;
            if(calculateDays(weights , mid) <= days){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
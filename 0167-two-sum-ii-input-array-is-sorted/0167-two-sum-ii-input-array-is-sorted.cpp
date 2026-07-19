class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n =  numbers.size();
       int left = 0;
       int right = n-1;
       while(left < right){
        int sum = numbers[left] + numbers[right];
        if(sum == target){
            return {left+1 , right+1}; // 1-based indexing so +1
        }
        else if(sum > target){ 
            right--;      // shift right ptr
        }
        else{
            left++;      // shift left ptr
        } 
       }
       return{};  // empty for no soln
    }
};
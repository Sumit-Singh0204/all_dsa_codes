class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int start = 0, end = 0;
        int totalPalindromes = 0;
        for(int i=0 ;i<n ;i++){
            totalPalindromes += expand(s,i,i);
            totalPalindromes += expand(s,i,i+1);
        }
    return totalPalindromes;
    }
private: 
    int expand(string s , int left , int right){
        int count=0;
        while(left >= 0 && right < s.length() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
       return count; 
    }    
};
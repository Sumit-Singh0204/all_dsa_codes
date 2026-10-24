class Solution {
public:
    int maxDepth(string s) {
        int maxD  = 0;
        int currentD = 0;
        for(char c : s){
            if( c == '('){
                currentD++;
                maxD = max(maxD ,currentD);
            }
            else if(c == ')'){
                currentD--;
            }
        }
        return maxD;
    }
};
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        
        // The first element of any Pascal's triangle row is always 1
        result.push_back(1);
        
        long long current_term = 1;
        
        for (int i = 1; i <= rowIndex; i++) {
           
            current_term = current_term * (rowIndex - i + 1) / i;
         
            // Cast back to standard int when pushing to vector
            result.push_back(static_cast<int>(current_term));
        }
        
        return result;
    }
};
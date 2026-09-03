class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int >freq;
        for(char c:s){
            freq[c]++;
        }
        vector<vector<char>>buckets(s.length()+1);
        for(auto &[ch , count] : freq){
            buckets[count].push_back(ch);
        }
        string result = "";
        for(int i = s.length() ; i>0 ; i--){
            for(char ch:buckets[i]){
                result.append(i, ch);
            }
        }
        return result;
    }
};
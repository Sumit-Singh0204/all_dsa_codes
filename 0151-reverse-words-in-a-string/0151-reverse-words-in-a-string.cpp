class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while(ss >> word){
            words.push_back(word);
        }
        reverse(words.begin(), words.end());

        int n = words.size();
        string ans;
        for(int i=0 ; i<n ; i++){
            if(i>0) ans += " ";
            ans += words[i];
        }
       return ans; 
    }
};
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int s_len = s.length();
        int p_len = p.length();

        // 1. Mandatory guard: prevents accessing out-of-bounds indices in s
        if (s_len < p_len) {
            return result;
        }
        
        vector<int> p_count(26, 0);
        vector<int> s_count(26, 0);

        // 2. Count the pattern frequencies and the first window of s
        for (int i = 0; i < p_len; i++) {
            p_count[p[i] - 'a']++;
            s_count[s[i] - 'a']++;
        }

        // Check if the very first window is an anagram
        if (p_count == s_count) {
            result.push_back(0);
        }

        // 3. Slide the window: use explicit signed integers for safe indexing
        for (int i = p_len; i < s_len; i++) {
            s_count[s[i] - 'a']++;               // Add incoming character
            s_count[s[i - p_len] - 'a']--;       // Remove outgoing character

            // If the window matches, add the starting index
            if (p_count == s_count) {
                result.push_back(i - p_len + 1);
            }
        }

        return result;
    }
};
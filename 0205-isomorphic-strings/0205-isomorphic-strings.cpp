class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        int mapS[256] = {0};
        int mapT[256] = {0};

        for(int i=0 ; i<s.length() ; i++){
            if(mapS[(unsigned char)s[i]] != mapT[(unsigned char)t[i]]){
                return false;
            }
        mapS[(unsigned char)s[i]] = i+1;
        mapT[(unsigned char)t[i]] = i+1;
        }
     return true;    
    }
};
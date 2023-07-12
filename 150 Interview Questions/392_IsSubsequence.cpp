class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for(auto i : t){
            if(i == s[j]){j++;}
        }
        if(j == s.size()){
            return true;
        }
        return false;
    }
};
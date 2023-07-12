class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int finalCount = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                count++;
                finalCount = count;
            }
            if(s[i] == ' '){
                count = 0;
            }
        }
        
        return finalCount;
    }
};
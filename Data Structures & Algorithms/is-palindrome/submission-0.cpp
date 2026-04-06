class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ch;
        
        for (char c: s){
            if (isalnum(c)){
                ch.push_back(tolower(c));
            }
            
        }

        vector<char> rev = ch;
        reverse(rev.begin(), rev.end());

        for (int i = 0; i < ch.size(); i++){
            if (ch[i] != rev[i]){
                return false;
            }
        }

        return true;

    }
};

class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n <  3){
            return false;
        }
        bool hasVowel = false;
        bool hasConsonent = false;
        bool hasDigit = true;
        for( char ch : word){
            ch = tolower(ch);
            if(ch == '#' || ch =='@' || ch == '$'){
                return false;
            }
            else if( ch >='0' && ch<='9'){
                continue;
            }
            else if(ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch =='u'){
                hasVowel = true;
            }
            else{
                hasConsonent = true;
            }
        }
        return hasVowel && hasConsonent;
    }
};
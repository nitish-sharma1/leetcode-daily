class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int pref_size = pref.size();
        int count=0;
        for( auto word : words)
        {
            int word_size = word.size();
            if(pref_size > word_size){
                continue;
            }
            string wordSubStr = word.substr(0,pref_size);

            if(wordSubStr == pref){
                count++;
            }

        }
        return count;
    }
};
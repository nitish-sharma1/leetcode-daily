class Solution {
public:
    char kthCharacter(int k) {
        string word ="a";
        while(word.size() <=k){
            int n = word.size();
            for(int i =0 ; i < n ; i++){
                if(word[i] !='z'){
                    word.push_back(word[i]+1);
                }
                else{
                    word.push_back('a');
                }
            }
        }
        return word[k-1];
    }
};
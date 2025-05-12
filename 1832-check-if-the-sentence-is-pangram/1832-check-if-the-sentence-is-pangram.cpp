class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> check(26,0);
        for(char ch : sentence){
            check[ch-'a'] =1;
        }
        for(int it : check){
            if(!it){
                return false;
            }
        }
        return true;
    }
};
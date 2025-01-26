class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        for(int i = 0 ; i < 2 ; i++){
            for(auto num  : nums){
            res.push_back(num);
        }
        }
        return res;
    }
};
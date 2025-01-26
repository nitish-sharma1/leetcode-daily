class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(2*n);
        for(int  i =0; i < 2*n ; i++ ){
            int idx = i %n;
            res[i]=nums[idx];
        }
        
        return res;
    }
};
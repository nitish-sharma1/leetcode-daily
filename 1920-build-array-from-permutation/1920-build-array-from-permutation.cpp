class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        vector<int> res;

        for( auto idx : nums){
            res.push_back(nums[idx]);
        }
        return res;
    }
};
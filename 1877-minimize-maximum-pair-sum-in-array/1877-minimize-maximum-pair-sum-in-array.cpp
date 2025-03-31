class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minsum = INT_MIN;
        int i = 0;
        int j = nums.size() -1;
        while(i<=j){
            minsum = max(minsum,nums[i]+nums[j]);
            i++;
            j--;
        }
        return minsum;
    }
};
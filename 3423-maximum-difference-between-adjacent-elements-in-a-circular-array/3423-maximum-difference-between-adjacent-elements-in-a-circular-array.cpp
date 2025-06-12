class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int max_diff = -1;
        for(int i=0;i<n;i++){
            max_diff = max(max_diff,abs(nums[(i+1)%n] - nums[i]));
        }
        return max_diff;
    }
    
};
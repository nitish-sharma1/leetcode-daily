class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> diff;
        int n = nums.size();
        for(int i=1; i < n ; i++){
            diff.push_back(nums[i]-nums[i-1]);
        }
        int minnum = INT_MAX;
        for(int num : diff){
            minnum = min(minnum , num);
        }
        
        return minnum;
    }
};
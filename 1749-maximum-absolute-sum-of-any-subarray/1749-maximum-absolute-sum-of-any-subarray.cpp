class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum = INT_MIN;
        int minsum = INT_MAX;
        int n = nums.size();

        int curr = 0 ; 
        for(int i = 0 ; i<n ; i++){
            curr +=nums[i];
            maxsum = max(maxsum ,curr);
            if(curr < 0){
                curr =0;
            }
        }
        curr = 0;
        for(int i = 0 ; i<n ; i++){
            curr +=nums[i];
            minsum = min(minsum ,curr);
            if(curr > 0){
                curr =0;
            }
        }
       
        return  max (abs(maxsum)  , abs(minsum));
    }
};
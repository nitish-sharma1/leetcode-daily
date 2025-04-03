class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxval = 0 ;
        int n = nums.size();
        vector<int> leftmax(n,0);
        vector<int> rightmax(n,0);
        for( int i = 1 ; i < n ; i++){
            leftmax[i] = max(leftmax[i-1] , nums[i-1]);

        }
        for( int i = n-2 ; i>=0 ; i--){
              rightmax[i] = max(rightmax[i+1] , nums[i+1]);
        }
        for(  int i = 0; i < n ; i++){
          
            long long val = (long long)(leftmax[i] - nums[i])* rightmax[i];
            maxval = max(maxval,val);

        }
        return maxval;
    }
};
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        
        int i = 0; 
        int res = INT_MIN;
    
            int curr =1 ; 
            while( i < n-1){

                if(nums[i] < nums[i+1]){
                    curr++;
                }
                else{
                    curr=1;
                }
                res = max(res,curr);
                i++;
            }

            curr =1;
        i=0;
         while( i < n-1){

                if(nums[i] > nums[i+1]){
                    curr++;
                }
                else{
                    curr=1;
                }
                res = max(res,curr);
                i++;
            }

        return res;
    }
};
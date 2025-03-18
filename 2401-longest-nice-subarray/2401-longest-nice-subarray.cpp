class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {

        int i=0;
        int n = nums.size();
        int j=0;
        int res=0;
        int mask = 0 ;
        while(j<n){
            while((mask & nums[j])!=0){
                mask = mask ^ nums[i];
                i++;
            }
            res = max(res,j-i+1);
            mask = mask | nums[j];
            j++;
        }
       
       return res; 
    }
};
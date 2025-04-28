class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long n = nums.size();
        long long count = 0;
        int i = 0 ; 
        int j = 0 ;
        long long total = 0 ;

        while(j < n ){
            total +=nums[j];
            while(i<=j && (total)*(j-i+1) >=k){
                total -=nums[i];
            
               i++;
            }
           count += j-i+1;
           j++;
        }
        return count;
    }
};
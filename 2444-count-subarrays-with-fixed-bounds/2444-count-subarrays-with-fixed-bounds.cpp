class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res = 0 ;
        int minidx = -1;
        int maxidx = -1;
        int ci = -1;

        for( int i = 0 ; i < nums.size();i++){
            if(nums[i] > maxK || nums[i] < minK){
                ci = i;
            }
            if (nums[i] == minK){
                minidx= i;
            }
           if(nums[i] == maxK){
                maxidx = i;
            }
int smallest = min (minidx,maxidx);
    int temp = smallest - ci;
            res += (temp <0) ? 0 : temp;
        }
       return res; 
    }
};
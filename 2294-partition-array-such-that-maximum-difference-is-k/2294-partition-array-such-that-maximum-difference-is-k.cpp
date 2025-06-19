class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0 ; 
        int  j = 0 ;
        int n = nums.size();
        int count = 0 ;
         
        while(j<n){
            while(j<n && nums[j]-nums[i]  <=k ){
                j++;
            }
            count++;
            i=j;
        }
        return count;
    }
};
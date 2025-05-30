class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0 ; 
        int j = nums.size()-1;
        if( nums[i] < nums[j]){
            return nums[i];
        }
        while(i<=j){
            int mid = (j-i)/2 + i;
            if( nums[mid] >=nums[j]){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return nums[j];
    }
};
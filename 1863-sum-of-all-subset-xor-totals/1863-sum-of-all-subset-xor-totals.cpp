class Solution {
public:
int n ;
    void findxor(vector<int>& nums , int i , int &sum ,int curr){
        if(i>=n){
            sum +=curr;
            return;
        }
        findxor(nums,i+1,sum,curr);
        curr ^= nums[i];
        findxor(nums,i+1,sum,curr);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        n=nums.size();
        findxor(nums,0,sum,0);
        return sum;
        
    }
};
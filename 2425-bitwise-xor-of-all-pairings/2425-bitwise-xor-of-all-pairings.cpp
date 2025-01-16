class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int res =0;
        if ( n % 2 !=0){
            for( auto num : nums2){
                res ^= num;
            }
        }
        if ( m%2 !=0){
            for( auto num : nums1){
                res ^= num;
            }
        }
        return res;
    }
};
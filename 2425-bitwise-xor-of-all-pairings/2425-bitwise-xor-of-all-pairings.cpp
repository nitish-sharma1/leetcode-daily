class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int,int> mp;
        for(auto num : nums1){
            mp[num] +=m;
        }
        for(auto num : nums2){
            mp[num]+=n;
        }
       int res = 0 ;
        for( auto it : mp ){
            if(it.second %2 !=0){
                res ^= it.first;
            }
        }
        return res;
    }
};
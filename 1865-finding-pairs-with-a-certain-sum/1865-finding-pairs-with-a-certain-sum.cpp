class FindSumPairs {
public:
  unordered_map<int,int> mp;
  vector<int> nums;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
      
        for(int num:nums1){
            mp[num]++;
        }
            nums=nums2;
        }
    
    void add(int index, int val) {
        nums[index] +=val;
    }
    
    int count(int tot) {
        int res=0;
        for(int num : nums){
            int target= tot - num;
          
                res += mp[target];
        
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        unordered_map<int,int> mp;

        for(auto num : nums ){
            if(mp.count(num) > 0){
                return true;
            }
            mp[num] =1;
        }

        return false;
        
    }
};
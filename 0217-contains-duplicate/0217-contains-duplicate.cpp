class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        unordered_set<int> mp;

        for(auto num : nums ){
            if(mp.count(num) > 0){
                return true;
            }
            mp.insert(num);
        }

        return false;
        
    }
};
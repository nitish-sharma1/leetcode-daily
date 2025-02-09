class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long count =0;
        int n= nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            nums[i] = nums[i]-i;
        }
         for(int i=0;i<n;i++){
           int number_seen = i-0;
           int same_found = 0;
           if(mp.count(nums[i]) >0){
            same_found = mp[nums[i]];
           }
           count+= number_seen - same_found;
           mp[nums[i]]++;
        } 
    return count;       
    }
};
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> st;
        unordered_map<int,int> mp;
        int n = nums.size();
        for(auto num : nums){
            st.insert(num);
        }
        int res=0;
        int i=0;
        int j=0;
       while(j<n){
        while(j<n && mp.size() < st.size()){
            mp[nums[j]]++;
            j++;
        }
        while(mp.size() == st.size()){
            res += n-j+1;
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
        }

       }
        return res;
    }
};
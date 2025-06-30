class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res =0;
        for(int num : nums){
            mp[num]++;

        }
        for(int num : nums){
            int mincnt = num;
            int maxcnt = num+1;
            if(mp.count(maxcnt)>0){
                res = max(res,mp[mincnt] +mp[maxcnt]);
            }
        }
        return res;
    }
};
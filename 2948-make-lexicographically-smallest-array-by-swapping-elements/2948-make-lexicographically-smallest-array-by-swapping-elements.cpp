class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<int> vec = nums;
        sort(vec.begin(),vec.end());
        int group = 0;
        int n = vec.size();
        unordered_map<int,int> numToGroup;
        unordered_map<int,queue<int>> groupToNum;
        numToGroup[vec[0]]= group;
        groupToNum[group].push(vec[0]);
        for( int i = 1 ; i< n ; i++ ){
            if( abs(vec[i] - vec[i-1] ) >  limit){
                group++;
            }
            numToGroup[vec[i]]=group;
            groupToNum[group].push(vec[i]);
        }
        vector<int> res;
        for( int i =0 ; i < n ; i++){
            int num = nums[i];
            int g = numToGroup[num];
            int small = groupToNum[g].front();
            groupToNum[g].pop();
            res.push_back(small);
        }
return res;
    }
};
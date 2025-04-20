class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int res = 0;
        for( int num : answers){
            mp[num]++;
        }
        for( auto it :  mp){
            int color = it.first;
            int count = it.second;
            int groups = ceil((double)count /(color+1));
            res +=groups * (color +1);
        }
        return res;
      
    }
};
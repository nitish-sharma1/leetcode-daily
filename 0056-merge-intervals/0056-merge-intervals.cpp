class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        int size =0;
        for(auto inter : intervals){
            if(res.empty()){
                res.push_back(inter);
                size++;
                continue;
            }
            auto b = res.back();
            if( inter[0] <= b[1]){
                res[size-1][0] = min(inter[0],b[0]);
                res[size-1][1] = max(inter[1],b[1]);
            }
            else{
                res.push_back(inter);
                size++;
            }

        }
        return res;
    }
};
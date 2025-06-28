class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>> ppq;
        int n = nums.size();
        vector<int> storge(n,INT_MAX);
        vector<int> res;
        for(int i = 0 ; i < n ; i++){
            ppq.push({nums[i],i});
            if(ppq.size() > k ){
                ppq.pop();
            }
        }
   
        while(!ppq.empty()){
            auto p = ppq.top();
            ppq.pop();
            storge[p.second] = p.first;
        }
        for(int i = 0 ; i< n ; i++){
            if(storge[i] != INT_MAX){
                res.push_back(storge[i]);
            }
        }
        return res;
    }
};
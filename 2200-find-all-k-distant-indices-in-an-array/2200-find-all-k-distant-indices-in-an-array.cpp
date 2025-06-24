class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        vector<int> keyidx;
        
        int n = nums.size();
        for(int i=0; i<n ; i++){
            if(nums[i]==key){
                keyidx.push_back(i);
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int idx : keyidx){
                if(abs(i-idx) <=k){
                    ans.push_back(i);
                    break;
                }
            }

        }
        return ans;
        
    }
};
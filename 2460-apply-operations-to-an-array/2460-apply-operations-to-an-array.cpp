class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i =0; i<n; i++){
            if(nums[i]==0){
                continue;
            }
            if(i==n-1 && nums[i] !=0 ){
                res.push_back(nums[i]);
                break;
            }
            else if(nums[i] == nums[i+1]){
                res.push_back(2*nums[i]);
                nums[i+1] =0;
               
            }else{
                res.push_back(nums[i]);
            }
        }
        while(res.size() !=n){
            res.push_back(0);
        }
        return res;
    }
};
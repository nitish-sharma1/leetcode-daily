class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        for(int i = 0 ; i < n ; i=i+3){
            vector<int> temp;
            if(nums[i+2]-nums[i] >k || nums[i+1]-nums[i]>k){
                return vector<vector<int>> ();
            }
            else{
                for( int j=i;j<i+3;j++){
                    temp.push_back(nums[j]);
                }
                res.push_back(temp);
            }
        }
       return res; 
    }
};